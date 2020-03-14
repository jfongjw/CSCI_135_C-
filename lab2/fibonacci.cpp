/*
Author: Joey Fong
Course: CSCI-136
Instructor: Jaspal Singh
Assignment: Fibonacci Sequence, Lab2D

Write a program fibonacci.cpp, which uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
*/

#include <iostream>
using namespace std;

int main()
{

  const int SIZE = 60;
  int fib[SIZE];
  
  fib[0] = 0;
  fib[1] = 1;
  
  cout << fib[0] << endl;
  cout << fib[1] << endl;
  
  for(int i=2; i<60; i++)
  {
    fib[i] = fib[i-1] + fib[i-2];
    cout << fib[i] << endl;
  }
  
  return 0;
}

/*
Because numbers are represented in the computer with a limited number of digits, they cannot represent arbitrary integer or floating-point numbers.

The int type has a limited range: On most platforms, it can represent numbers up to a little more than two billion. For many applications, this is not a problem, but you cannot use an int to represent the world population.

If a computation yields a value that is outside the int range, the result overflows. No error is displayed. Instead, the result is truncated to fit into an int, yielding a useless value. For example,

int one_billion = 1000000000;

cout << 3 * one_billion << endl;

displays –1294967296.

In situations such as this, you can switch to double values. 
*/
