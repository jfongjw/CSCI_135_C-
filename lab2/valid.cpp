/*
Author: Joey Fong
Course: CSCI-136
Instructor: Jaspal Singh
Assignment: Input Validation, Lab2A
Date: 02/05/2020

Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int num;

  cout << "Please enter an integer: " << endl;
  cin >> num;
  
  while (num <= 0 || num >= 100)
  {
    cout << "Please re-enter: ";
    cin >> num;
  }
  
  // power function in cmath: pow (base, exponent)
  // alternatively, num * num
  cout << "Number squared is " << pow(num, 2);

  return 0;
}
