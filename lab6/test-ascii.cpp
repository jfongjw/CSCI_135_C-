//Joey Fong
//09 March 2020
//Write a program test-ascii.cpp that asks the user to input a line of text (which may possibly include spaces). The program should report all characters from the input line together with their ASCII codes.

// comment
// comment
// comment
// comment

#include<iostream>
#include<string>
using namespace std;

int main()
{
  string text;
  
  cout << "Enter a line of text: ";
  getline(cin, text);
  
  for(int i=0; i<text.length(); i++)
  {
    cout << text[i] << " " << (int) text[i] << endl;
  }

  return 0;
}
