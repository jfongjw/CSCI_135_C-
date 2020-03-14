//Joey Fong
//Date: Febuary 28, 2020
/*
Write a program "checkerboard3x3.cpp" that asks the user to input "width" and "height" and prints a checkerboard of 3-by-3 squares.

(It should work even if the input dimensions are not a multiple of three.)
*/

#include<iostream>
using namespace std;

int main()
{
  int width, height;

  cout << "Input width: " << endl;
  cin >> width;
  cout << "Input height: " << endl;
  cin >> height;
  
  /**
    Inside the regular nested for loop..
    
    If 
    both row and col divisible by 3 is not even (with a remainder of 1)
    
    or 
    
    both row and col divisible by 3 is even
    
    print out *
    
    Else print out space " "
    
  */
  
  for(int row=0; row < height; row++)
  {
    for(int col=0; col < width; col++)
    {
      if(((row/3)%2==1) && ((col/3)%2==1 ) || (((row/3)%2==0) && ((col/3)%2==0)))
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
