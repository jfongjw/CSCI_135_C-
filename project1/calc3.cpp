//Joey Fong
//Date: 02/07/2020
/*
Write an even better calculator program calc3.cpp that can understand squared numbers. We are going to use a simplified notation X^ to mean X2. For example, 10^ + 7 - 51^ should mean 102 + 7 − 512.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int sum = 0;
  int next_num = 0;
  char symbol;
  char prev_symbol = '+';
  
  cin >> next_num;
  
  while(cin >> symbol)
  {
    if(symbol == '^')
    {
      sum += next_num*next_num;
      cin >> symbol;
    }
   
    if(prev_symbol == '+')
    {
      sum = sum + next_num;
    }
    else if(prev_symbol == '-')
    {
      sum = sum - next_num;
    }
    
    prev_symbol = symbol;
    cin >> next_num;
    if(prev_symbol == ';')
    {
      prev_symbol = '+';
      cout << sum << endl;
      sum = 0;
    }

 
  }
  
   cout << sum;
  
  return 0;
}
