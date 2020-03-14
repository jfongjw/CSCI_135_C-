//Joey Fong
//Date: 02/06/2020
//Project 1 C
//Calc2: Reading multiple formulas.
/*
Write a better version of the calculator, calc2.cpp, that can evaluate multiple arithmetic expressions. Let’s use the semicolon symbol that must be used at the end of each expression in the input.
*/

#include <iostream>
using namespace std;

int main()
{
  /*
  declare variable of type int named sum_num and next_num for
  calculating
  
  sum = sum + next_num
  sum = sum - next_num
  
  Initially, both sum_num and next_num are set to 0
  */
  
  int sum_num = 0;
  int next_num = 0;
  char symbol; //declare a charater variable "symbol" to detect character ';' and '+' and '-'
  
  //This operation makes the program wait for input from cin; generally, this means that the program will wait for the user to enter some sequence with the keyboard.
  cin >> sum_num;
  
  while (cin >> symbol)
  {
    cin >> next_num;
    
    if (symbol == ';')
    {
      cout << sum_num << endl;
      sum_num = next_num;
    }
    else if (symbol == '+')
    {
      sum_num = sum_num + next_num;
    }
    else if (symbol == '-')
    {
      sum_num = sum_num - next_num;
    }
  }
  
  return 0;
}
