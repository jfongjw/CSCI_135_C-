/*
Author: Joey Fong
Course: CSCI-136
Instructor: Jaspal Singh
Assignment: Edit Array, Lab2C
Date: 02/05/2020

Write a program edit-array.cpp that creates an array of 10 integers, and provides the user with an interface to edit any of its elements. Specifically, it should work as follows:

1. Create an array myData of 10 integers.
2. Fill all its cells with value 1 (using a for loop).
3. Print all elements of the array on the screen.
4. Ask the user to input the cell index i, and its new value v.
5. If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, and go back to the step 3. Otherwise, if index i is out of range, the program exits.

*/

#include <iostream>
using namespace std;

int main()
{
  int i;
  int j;
  int v;
  
  int myData[10];
  
  for(int i = 0; i < 10; i++)
  {
    myData[i] = 1;
  }
  cout << endl;
  
  do
  {
  
  for(int j = 0; j < 10; j++)
  {
    cout << myData[j] << " ";
  }
  
  cout << "Input index: ";
  cin >> j;
  
  cout << "Input value: ";
  cin >> v;
  
  if(j < 10 && j >=0)
  {
    myData[j]=v;
  }
    
  cout << endl;
  
  }
  while(j >= 0 && j < 10);  // while 0 <= j < 10
  
  
  cout << "Index out of range. Exit." << endl;
  
  return 0;
}
