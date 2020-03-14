//Joey Fong
//Date: February 27, 2020
//Write a program "lower.cpp" that prints the bottom-left half of a square, given the side "length."

<<<<<<< HEAD
=======
/*
logic:
use a string to print out a *
every subsequent row, print out additional * until the for loop ends

ex.

*
**
***
****

*/

>>>>>>> 47f8b63a1ffc8cc8845bbcd6f7274fd69ba05edb
#include<iostream>
using namespace std;

int main()
{
  int length;
  string result = "*"; // created a string "result" to store a *

  cout << "Input side length: " << endl;
  cin >> length;
  
  for(int row=0; row<length; row++)
  {
      cout << result << endl; // print out the string "result"
      result = result + "*";
  }

  return 0;
}
