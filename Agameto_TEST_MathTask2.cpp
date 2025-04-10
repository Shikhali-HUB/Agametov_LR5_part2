#include "M:\Agametov_IST\\Agametov_LR5\\Agametov_LR5_part2\\CUTE\\cute\\cute.h"
#include "M:\\Agametov_IST\\Agametov_LR5\\Agametov_LR5_part2\\CUTE\cute\\ide_listener.h"
#include "M:\\Agametov_IST\\Agametov_LR5\\Agametov_LR5_part2\\CUTE\cute\\cute_runner.h"
#include "M:\Agametov_IST\\Agametov_LR5\\Agametov_LR5_part2\\Surname_MathTask2.h"

using namespace cute;

// Тесты для UserInput
void testUserInput_Empty() {
    string str = "";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_NonDigit() {
    string str = "abc";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_Digit() {
    string str = "123";
    bool expected = true;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_Negative() {
    string str = "-123";
    bool expected = true;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual); 
}

// Тесты для enterfirstx
void testGetFirstDigit() {
    int x = 645;
    int expected = 6;
    int actual = enterfirstX();
    ASSERT_EQUAL(expected, actual);
}

// Тесты для enterNX
void testGetNthDigitFromRight() {
    int x = 783;
    int n = 2;

    int expected = 8;

    int actual = enterNX();

    ASSERT_EQUAL(expected, actual);
}

int main() {
    suite s;
    s.push_back(CUTE(testUserInput_Empty));
    s.push_back(CUTE(testUserInput_NonDigit));
    s.push_back(CUTE(testUserInput_Digit));
    s.push_back(CUTE(testUserInput_Negative));
    s.push_back(CUTE(testGetFirstDigit));
    s.push_back(CUTE(testGetNthDigitFromRight));

    ide_listener<> listener;
    makeRunner(listener)(s, "ALL TESTS");
    return 0;
}