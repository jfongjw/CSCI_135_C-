//Joey Fong
//09 March 2020

/*
Write a program vigenere.cpp. It should contain a function encryptVigenere implementing this cipher:

string encryptVigenere(string plaintext, string keyword);

You may assume that the keyword contains only lowercase alphabetic characters a - z.

The main should implement a testing interface similar to the one in Task B, the user enters the plaintext and the keyword, and the program reports the ciphertext.
*/

#include <iostream>
#include <string>
using namespace std;

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift)
{
  char shifted_c;
  
  if (islower(c)) //check if char c is lower case
  {
    // % 26 (# of characters in English alphabet
    shifted_c = (c - 'a' + rshift) % 26 + 'a';
  }
  else if (isupper(c)) //65 'A' <= c <= 90 'Z'
  {
    shifted_c = (c - 'A' + rshift) % 26 + 'A';
  }
  else
  {
    //special characters (? , ! ... space, etc.)
    shifted_c = c;
  }
  
  return shifted_c;
}


// Vigenere cipher encryption
string encryptVigenere(string plainText, string keyword)
{
  int j=0; string cipherText="";
  for(int i=0; i<plainText.length(); i++)
  {
    if(isalpha(plainText[i]))
    {
      cipherText = cipherText + shiftChar(plainText[i], keyword[j] - 97);
      j++;
    }
    else
    {
      cipherText = cipherText + plainText[i];
    }
    if(j == keyword.length())
    {
      j = 0;
    }
  }
  return cipherText;
}


int main()
{
  string plainText;
  string keyword;

  cout << "Enter plaintext: ";
  getline(cin, plainText);
  cout << "Enter keyword: ";
  cin >> keyword;
  cout << "Ciphertext: " << encryptVigenere(plainText, keyword) << endl;

	return 0;
}
