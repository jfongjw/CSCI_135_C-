//Joey Fong
//02/05/2020

//This program promts user for two numbers using 'cin >>', then returns the larger of the two numbers

#include <iostream>
using namespace std;

int main ()
{
  int num1 = 0;
  int num2 = 0;
  
  cout << "Please enter a numbers: " << endl;
  cin >> num1;
  
  cout << "Please enter another number: " << endl;
  cin >> num2;
  
  if (num1 > num2)
  {
    cout << num1 << endl;
  }
  else
  {
    cout << num2 << endl;
  }

  return 0;
}
