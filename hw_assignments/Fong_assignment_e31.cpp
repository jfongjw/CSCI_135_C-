//Joey Fong
//February 26, 2020
//Write a program that reads an integer and prints whether it is negative, zero, or positive.

#include <iostream>
using namespace std;

int main()
{
  int num;
  
  cout << "Enter an integer: ";
  cin >> num;
  
  if (cin.fail())
  {
    cout << "Error. Input is not an integer.";
  }
  
  else if (num < 0)
  {
    cout << "negative";
  }
  
  else if (num > 0)
  {
    cout << "positive";
  }

  else if (num == 0)
  {
    cout << "zero";
  }
  
  cout << endl << num;

  return 0;
}
