//Joey Fong
//02/20/2020
/*
Write a program box.cpp that asks the user to input width and height and prints a solid rectangular box of the requested size using asterisks.

Also, print a line Shape: between user input and the printed shape (to separate input from output).
*/

#include <iostream>
using namespace std;

int main()
{
  int width, height;
  char symbol = '*';
  
  cout << "Input width: ";
  cin >> width;
  cout << "Input height: ";
  cin >> height;
  
  cout << endl;
  cout << "Shape:" << endl;
  for(int i=0; i<height; i++)  //the height print out the rows
  {
    for(int j=0; j<width; j++) //the width print out the column
    {
      cout << symbol;
    }
    cout << endl;              //print endl to go to next line and print out the *
  }

  return 0;
}
