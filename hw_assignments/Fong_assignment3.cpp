//Joey Fong
//Date: 02/10/2020
//Assignment E4.8
/*
Write a program that reads a word and prints each character of the word on a separate line. For example, if the user provides the input "Harry", the program prints

H
a
r
r
y

*/
//Copyright by Joey Fong on February 10, 2020
//All rights reserved

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string word;

  cout << "Enter a word :" << endl;
  cin >> word;
  
  for (int i = 0; i < word.length(); i++)
  {
    cout << word[i] << endl;
  }
  
  return 0;
}
