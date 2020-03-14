/*
Author: Joey Fong
Course: CSCI-136
Instructor: Jaspal Singh
Assignment: Print Interval, Lab2B
Date: 02/05/2020

Write a program print-interval.cpp that asks the user to input two integers L and U (representing the lower and upper limits of the interval), and print out all integers in the range L ≤ i < U separated by spaces. Notice that we include the lower limit, but exclude the upper limit.

*/

#include <iostream>
using namespace std;

int main()
{
  int L, U;
  int m;
  
  // asking user to enter lower limit
  cout << "Please enter lower limit L (in integer): " << endl;
  cin >> L;
  
  cout << "Please enter upper limit U (in integer): " << endl;
  cin >> U;
  
  //for loop logic:
  //initialize i as integer i = L, when i < U, increment i using i++, print i (pad space between each number using " ")
  for(int i = L; i < U; i++)
  {
    cout << i << " ";
  }
  
  return 0;
}
