//Joey Fong
//Date: March 02, 2020

#include <iostream>
#include <cmath>
using namespace std;

/**********************************************
Write a program "numbers.cpp" that defines a function

bool isDivisibleBy(int n, int d);

If "n" is divisible by "d", the function should return "true", otherwise return "false".
************************************************/

bool isDivisibleBy (int n, int d)
{

  //if d is not 0 (can't divide by 0) and (n/d) without any modulus
  if ((d != 0) && (n % d == 0)) 
  {
    return true;
  }
  else
  {
    return false;
  }
}

/*********************************************
Check whether a number is a prime number
 
A prime number is an integer greater or equal to 2 that is only divisible by 1 and by itself. 
**********************************************/

bool isPrime(int n)
{
  if(n <= 1) //any number 1 or less is not a prime number (such as negative number)
  {
    return false;
  }
  for(int i = 2; i <= sqrt(n); i++) //start at 2, check for sqrt of the number, keep checking
  {
    if (isDivisibleBy(n, i)) //if it can be divisible by the number itself and other number 2 or greater, return false
    {
      return false;
    }
  }
  return true; //if everything else, return true
}

/***********************************************
Add a function

int nextPrime(int n);

that returns the smallest prime greater than n.
************************************************/


int nextPrime(int n) //pass a prime number into nextPrime function
{
  int nextP = n + 1; //nextP = n +1 (the next number greater than n)
  
  //while isPrime(nextP) is not true, nextP++ (increment nextP)
  while(!isPrime(nextP))
  {
    nextP++;
  }
  return nextP; //return nextP when true
}

/**************************************************
Add a function

int countPrimes(int a, int b);

that returns the number of prime numbers in the interval a ≤ x ≤ b. Change the main function to test the new code.
***************************************************/

int countPrimes(int a, int b)
{
  int count = 0;
  
  for(int i=a; i<=b; i++)
  {
    if(isPrime(i))
    {
      count++;
    }
  }
return count;
}

/***************************************************
A prime number N is called a twin prime if either N-2 or N+2 (or both of them) is also a prime.
For example, a prime 17 is a twin prime, because 17+2 = 19 is a prime as well.
The first few twin primes are: 3, 5, 7, 11, 13, 17, 19, 29, 31 …

Add a function

bool isTwinPrime(int n);

that determines whether or not its argument is a twin prime. Change the main function to test the new code.
****************************************************/

bool isTwinPrime(int n)
{
  if(isPrime(n) && (isPrime(n+2) || isPrime(n-2)))
  {
    return true;
  }
  else
  {
    return false;
  }
}

/****************************************************
Add a function

int nextTwinPrime(int n);

that returns the smallest twin prime greater than n. Change the main function to test the new code.
*****************************************************/

int nextTwinPrime(int n)
{
  int nextP = n + 1; //nextP = n +1 (the next number greater than n)
  
  //while isPrime(nextP) is not true, nextP++ (increment nextP)
  while(!isTwinPrime(nextP))
  {
    nextP++;
  }
  return nextP; //return nextP when true
}

/*****************************************************
Add a function

int largestTwinPrime(int a, int b);

that returns the largest twin prime in the range a ≤ N ≤ b.
If there is no twin primes in range, then return -1.
******************************************************/

int largestTwinPrime (int a, int b)
{

/*
1) for i = larger prime #, i >= smaller prime #, i-- (decrement i)
2) if i is prime and (the number before i or after i is also prime), return i
3) otherwise, return -1 (return as an error)
*/
  for(int i=b; i>=a; i--)
  {
    if(isTwinPrime(i))
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  //cout << isDivisibleBy(126, 0);
  //cout << isPrime(25);
  //cout << nextPrime(17);
  //cout << countPrimes(2, 37);
  //cout << isTwinPrime(17);
  //cout << nextTwinPrime(3);
  //cout << largestTwinPrime(2, 37);
  
  return 0;
}
