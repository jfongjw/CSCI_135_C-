//Joey Fong
//Date: 02/27/2020
//Quiz 5
//Print rectangle that is 5 stars wide, 6 rows (spaces in between stars, but not before or after

#include <iostream>
using namespace std;

int main ()
{
  
  for(int row = 0; row < 6; row++)
  {
    for(int col = 0; col < 5; col++)
    {
      if (col < 4)
      {
        cout << "* ";
      }
      else
      {
        cout << "*";
      }
    }
    cout << endl;
  }

  return 0;
}
