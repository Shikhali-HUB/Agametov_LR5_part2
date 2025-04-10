#ifndef AGAMETOV_MATHTASK_CPP_2
#define AGAMETOV_MATHTASK_CPP_2

#include <string>
#include <functional>
#include <cmath>
#include <iostream>
#include <map>
#include "M:\\Agametov_IST\\Agametov_LR5\\Agametov_LR5_part2\\Surname_MathTask2.h"
using namespace std;

struct MenuItem{
        string title;
        function<void()>action;
    };

int main(){
    map<int,MenuItem>menu= {
        {1,{"x",enterX}},
        {2,{"n",enterN}},
        {3,{"first digit x",enterfirstX}},
        {4,{"find n-th digit of X",enterNX}},
    };
    int choice = 0;

    while (true) {
        cout<<"Menu:"<<endl;
        for (const auto& item : menu) {
            cout << "Task " <<item.first <<". " << item.second.title <<endl;
        }
        cout << "0. Exit" << endl;
        EnterNumber(choice,"Enter Task: ")();
        if (choice == 0 ){
            cout << "@ 2025 FirstName LastName" <<endl;
            break;
        }
        cout << endl;
        if(menu.find(choice)!= menu.end()){
            menu[choice].action();
        }else{
            cout << "Invalid input.";
        }
        cout << endl;
    }
    return 0;
}

#endif