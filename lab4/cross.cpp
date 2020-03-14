//Joey Fong
//February 26, 2020
//Write a program "cross.cpp" that asks the user to input the shape "size," and prints a diagonal cross of that dimension.

#include <iostream>
using namespace std;

int main()
{
  int size; //height is to row, width is to column
  
  cout << "Input size: ";
  cin >> size;
  
  cout << endl;
  cout << "Shape: " << endl;
  
  for(int row = 0; row<size; row++)
  {
    for(int col = 0; col<size; col++)
    {
    
/*
if

col == row (x=y) ,  e.g. {(0,0),(1,1),(2,2),(3,3)...} or
col == size - row - 1 ,  where size is a constant integer

--------------------
ex. size = 5

    x      y
1.(0,0), (0,4)
2.(1,1), (1,3)
3.(2,2), (2,2)
4.(3,3), (3,1)
5.(4,4), (4,0)

*   *
 * *
  *
 * *
*   *
--------------------
*/

      if(col == row || col==size-row-1)
      {
        cout << "*";
      }
    else
      {
        cout<<" ";
      }
    }
  cout << endl;

  }
  
  return 0;
}
