/*
Author: Joey Fong
Course: CSCI-136
Instructor: Jaspal Singh
Assignment: Find the smaller of two integers, Lab1A
Date: 01/29/2020

This program smaller.cpp asks the user to input two integer numbers and prints out the smaller of the two.
*/

#include <iostream>
using namespace std;

int main()
{
  int x, y;

  cout << "Enter the first number: " << endl;
  cin >> x;

  cout << "Enter the second number: " << endl;
  cin >> y;

  if(x < y)
  {
    cout << "The smaller of the two is " << x;
  }
  else
  {
    cout << "The smaller of the two is " << y;
  }

  return 0;
}
