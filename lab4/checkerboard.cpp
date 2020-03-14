//Joey Fong
//02/20/2020
/*
Write a program checkerboard.cpp that asks the user to input width and height and prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating).
*/

#include <iostream>
using namespace std;

int main()
{
  int width, height;
  
  cout << "Input width: ";
  cin >> width;
  cout << "Input height: ";
  cin >> height;
  
  cout << endl;
  cout << "Shape: " << endl;
  for(int row=0; row<height; row++)  //row print out in column
  {
    for(int col=0; col<width; col++) //column print out in row
    {
      if(col % 2 == 0 && row % 2 ==0) //if column is even, row is even, print *
      {
        cout << "*";
      }
      else if(col % 2 != 0 && row % 2 != 0) //if column is odd, row is odd, print *
      {
        cout << "*";
      }
      else
      {
        cout << " ";  //if neither condition is met, print space " "
      }
    }
  cout << endl;
  }

  return 0;
}
