//Joey Fong
//March 05, 2020

/*
creat a function

int max3(int a, int b, int c)
*/

#include<iostream>
#include<cmath>
using namespace std;

int max3(int a, int b, int c)
{
  if(c > b && c > a)
  {
    return c;
  }
  else if(b > c && b > a)
  {
    return b;
  }
  else
  {
    return a;
  }
}

int main()
{
  cout << max3(-22, 18, 9)<<endl;
  
  return 0;
}
