//Joey Fong
//Date: 02/26/2020
//Write a program that reads three numbers and prints “increasing” if they are in increasing order, “decreasing” if they are in decreasing order, and “neither” otherwise. Here, “increasing” means “strictly increasing”, with each value larger than its predecessor. The sequence 3 4 4 would not be considered increasing.

#include<iostream>
using namespace std;

int main()
{
  double num1, num2, num3;

  cout << "Enter first number: " << endl;
  cin >> num1;
  cout << "Enter second number: " << endl;
  cin >> num2;
  cout << "Enter third number: " << endl;
  cin >> num3;
  
  if ((num1 < num2 && num2 < num3) && (num3 > num1))
  {
    cout << "increasing";
  }
  else if ((num1 > num2 && num2 > num3) && (num3 < num1))
  {
    cout << "decreasing";
  }
  else
  {
    cout << "neither";
  }
  return 0;
}
