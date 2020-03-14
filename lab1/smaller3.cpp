/*
Author: Joey Fong
Course: CSCI-136
Instructor: Jaspal Singh
Assignment: Find the smaller of three integers, Lab1B
Date: 01/29/2020

This program, smaller3.cpp, asks the user to input three integer numbers, and prints out the smallest of the three.

(Hint: There are many possible solutions here. One possible strategy: Given numbers x, y, and z, you can first compare x and y, take whichever is smaller and compare it with z.)
*/

#include <iostream>
using namespace std;

int main()
{
  int x, y, z;

  cout << "Enter the first number: " << endl;
  cin >> x;
  
  cout << "Enter the second number: " << endl;
  cin >> y;
  
  cout << "Enter the third number: " << endl;
  cin >> z;
  
  if(x < y and x < z)
  {
    cout << "The smaller of the three is " << x;
  }
  else if(y < x and y < z)
  {
    cout << "The smaller of the three is " << y;
  }
  else
  {
    cout << "The smaller of the three is " << z;
  }

  return 0;
}
