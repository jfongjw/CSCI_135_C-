//Joey Fong
//Date: March 02, 2020

/*
Write a function

string middle(string str)

that returns a string containing the middle character in str if the length of str is odd, or the two middle characters if the length is even. For example, middle("middle") returns "dd".

*/

#include <iostream>
#include <string>
using namespace std;

string middle(string str)
{
  int i = str.length();

  if (i%2==0)
  {
    return str.substr(i/2 - 1, 2);
  }
  return str.substr(i/2, 1);
}


int main()
{
  //string new_str = "hello world";
  //cout << middle(new_str);
  return 0;
}
