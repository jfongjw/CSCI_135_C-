//Joey Fong
//11 March 2020

/*
Write a function void sort2(int& a, int& b) that swaps the values of a and b if a is greater than b and otherwise leaves a and b unchanged. For example,

int u = 2;

int v = 3;

int w = 4;

int x = 1;

sort2(u, v); // u is still 2, v is still 3

sort2(w, x); // w is now 1, x is now 4
*/

#include <iostream>
using namespace std;

void sort2 (int& a, int& b)
{
  int num = a;

  if (a > b)
  {
    a = b;
    b = num;
  }
  else
  {
    a = a;
    b = b;
  }
}

int main()
{
  int a, b;
  
  cin >> a;
  cin >> b;
  
  sort2 (a, b);
  cout << a << " " << b << endl;
  
  return 0;
}
