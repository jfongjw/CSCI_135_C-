/*
Author: Joey Fong
Course: CSCI-136
Instructor: Jaspal Singh
Assignment: Number of days in a given month, Lab1D
Date: 01/29/2020

Write a program month.cpp that asks the user to input the year and the month (1-12) and prints the number of days in that month (taking into account leap years). You may not use switch case or arrays even if you know these language constructs.

Comments go here
Comments go here
*/

#include <iostream>
using namespace std;

int main()
{
  int year, month;
  
  cout << "Enter year: " << endl;
  cin >> year;
  
  cout << "Enter month: ";
  cin >> month;
  
  if(month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12)
  {
    cout << "31 days";
  }
  else if(month == 4 or month == 6 or month == 9 or month == 11)
  {
    cout << "30 days";
  }
  
  
  if(month == 2)
  {
    if (year % 4 != 0)
    {
      cout << "28 days";
    }
    else if (year % 100 != 0)
    {
      cout << "29 days";
    }
    else if (year % 400 != 0)
    {
      cout << "28 days";
    }
    else
    {
      cout << "29 days";
    }
  }

  return 0;
}
