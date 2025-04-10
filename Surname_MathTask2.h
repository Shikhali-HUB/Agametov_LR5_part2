#ifndef AGAMETOV_MATHTASK_H_2
#define AGAMETOV_MATHTASK_H_2

#include <string>
#include <functional>
#include <cmath>
#include <iostream>
#include <map>
using namespace std;

int N,X;
bool UserInput(string input) {
  if (input.empty())
    return false;
  try {
    int number = stoi(input);
  } catch (...) {
    return false;
  }
  return true;
}

function<void()> EnterNumber(int &varLink, string label) {
  return [&varLink, label]() {
    string raw_input;
    cout << label;
    getline(cin, raw_input);

    while (!UserInput(raw_input)) {
      cout << label;
      getline(cin, raw_input);
    }
    varLink = stoi(raw_input);
  };
}


int enterX(){
  while (true) {
  EnterNumber(X,"Enter number x: ")();
  if (X < 999 && X > 99) {
    cout << "X: " << X << endl;
    break;
  } else{
    cout << "Invalid number.\n";
  }
  }
}

int enterN(){
  while (true) {
  EnterNumber(N,"enter number n (less than X, i.e. 1 to 3): ")();
  if (N >= 1 && N < 100) {
    cout << "N:" << N <<endl;
    break;
  }else{
    cout << "Invalid.\n";
  }
  }
}

int enterfirstX(){
  int first = X / 100;
  cout << "first digit X: " << first << endl;
}

int enterNX(){
  int n,n2;
  EnterNumber(n2, "type what number you wanna find: ")();
  if (n2 == 1) {
      n = X % 10; 
  } else if (n2 == 2) {
      n = (X / 10) % 10;
  } else if (n2 == 3) {
      n = X / 100; 
  }
  cout << n2 << "-th digit of x: " << n << endl;
}
#endif