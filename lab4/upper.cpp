//Joey Fong
//Date: 02/27/2020
//Write a program "upper.cpp" that prints the top-right half of a square, given the side "length."

#include<iostream>
using namespace std;

int main()
{
  int length;
  int z;
  
  string result = "*"; //created a string "result" to store a *

  cout << "Input side length: ";
  cin >> length;
  
  cout << endl;
  
  for(int row=0; row < length; row++) //print row of items downward
  {
    /*
    while col is less than row
    row = 0, col = 0
    row = 0, col = 1
    row = 0, col = 2
    row = 0, ... until col = 5
    
    row = 1, col = 0
    row = 1, col = 1
    row = 1, col = 2
    row = 1, ... until col =5
    
    row = 2, col = 0
    row = 2, col = 1
    row = 2, col = 2
    row = 2, ... until col = 5
    */
    for(int col=0; col < row; col++) //print col of space (" ") left to right
    {
      cout << " ";
    }
    
    /*
    while length is 5, row is 0, row++ or (5-0, which prints 5 stars on 1st row)
    while length is 5, row is 1, row++ or (5-1, which prints 4 stars on 2nd row)
    while lenght is 5, row is 2, row++ or (5-2, which prints 3 stars on 3rd row)
    */
    for(int col=0; col < (length - row); col++) //print col of * left to right
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
