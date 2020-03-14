//Joey Fong
//09 March 2020
//Write a program caesar.cpp with functions implementing Caesar cipher encryption

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


// Caesar cipher encryption
string encryptCaesar(string plainText, int rshift)
{
  string cipherText = ""; //This is not a space; it's an empty string
  for (int i=0; i < plainText.length(); i++)
  {
    cipherText = cipherText + shiftChar(plainText[i], rshift);
  }
  return cipherText;
}


int main()
{
  string plainText;
  int rshift;

  cout << "Enter plaintext: ";
  getline(cin, plainText);
  cout << "Enter shift: ";
  cin >> rshift;
  cout << "Ciphertext: " << encryptCaesar(plainText, rshift) << endl;

	return 0;
}
