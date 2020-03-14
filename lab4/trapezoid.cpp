//Joey Fong
//Date: February 28, 2020

/*
Write a program "trapezoid.cpp" that prints an upside-down trapezoid of given "width" and "height."

However, if the input height is impossibly large for the given width, then the program should report, "Impossible shape!"
*/

#include<iostream>
using namespace std;

int main()
{
  int width, height;
<<<<<<< HEAD
  
  cout << "Input width: ";
  cin >> width;
  cout << endl;
  cout << "Input height: ";
  cin >> height;
  cout << endl;
  
  int space = 0;
  int star = width;
  
  for(int row=0; row<height; row++)
  {
    for(int col=0; col<width; col++)
    {
      for(int i=0; i<space; space++)
      {
        cout << " ";
      }
      for(int j=0; j<star; star++)
      {
        cout << "*";
      }
      space += 1;
      star -= 2;
    }
  cout << endl;
  }
=======
  int space, star;  //declare variable space, star

  cout << "Input width: ";
  cin >> width;
  cout << endl;

  cout << "Input height: ";
  cin >> height;
  cout << endl;

  cout << "Shape: " << endl;

  //if width is even and height is greater than (1/2)*(width), print "impossible shape"
  if (width % 2 == 0 && height > width/2)
  {
    cout << "Impossible shape! " << endl;
  }
  //if width is not even and height is greater than ((1/2)*(width) + 1), print "impossible shape"
  else if (width % 2 != 0 && height > ((width/2)+1))
  {
    cout << "Impossible shape! " << endl;
  }

  else
  {
    space = 0;  //space set to 0
    
    for (int row=0; row < height; row++)
    {
      for (star=0; star < space; star++) //when star < space, print a " "
      {
        cout << " ";
      }

      for (int col=0; col < width; col++) //when col < width, print a *
      {
        cout << "*";
      }

      cout << endl;

      width -= 2; //width decrement by 2
      space++; //space increment by 1
    }
   }
>>>>>>> 47f8b63a1ffc8cc8845bbcd6f7274fd69ba05edb

  return 0;
}
