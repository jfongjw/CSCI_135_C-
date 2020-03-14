//Joey Fong
//09 March 2020

/*
Implement two decryption functions corresponding to the above ciphers. When decrypting ciphertext, ensure that the produced decrypted string is equal to the original plaintext:

decryptCaesar(ciphertext, rshift) == plaintext

decryptVigenere(ciphertext, keyword) == plaintext

Write a program decryption.cpp that uses the above functions to demonstrate encryption and decryption for both ciphers.

It should first ask the user to input plaintext, then ask for a right shift for the Caesar cipher and report the ciphertext and its subsequent decryption. After that, it should do the same for the Vigenere cipher.
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


// reverseShiftChar
char reverseShiftChar(char c, int rshift)
{
  char decrypted_c;
  
  if (islower(c))
  {
    decrypted_c = (c - rshift - 'z') % 26 + 'z';
  }
  else if (isupper(c))
  {
    decrypted_c = (c - rshift + 'A') % 26 + 'A';
  }
  else
  {
    decrypted_c = c;
  }
  
  return decrypted_c;
}


// Caesar cipher decryption
string decryptCaesar(string plainText, int rshift)
{
  string cipherText = ""; //This is not a space; it's an empty string
  for (int i=0; i < plainText.length(); i++)
  {
    cipherText = cipherText + reverseShiftChar(plainText[i], rshift);
  }
  return cipherText;
}


// Vigenere cipher decryption
string decryptVigenere(string plainText, string keyword)
{
  int j=0; string cipherText="";
  for(int i=0; i<plainText.length(); i++)
  {
    if(isalpha(plainText[i]))
    {
      cipherText = cipherText + reverseShiftChar(plainText[i], keyword[j] - 97);
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
  int rshift;
  string keyword;
  string cipherText;
  
  cout << "Enter plaintext: ";
  getline(cin, plainText);
  
  // Caesar
  cout << "= Caesar =" << endl;
  cout << endl;
  
  //Enter shift
  cout << "Enter shift: ";
  cin >> rshift;
  
  //Caesar cipher encryption
  cipherText = encryptCaesar(plainText, rshift);
  cout << "Ciphertext: " << cipherText << endl;
  
  // decrypt Caesar cipher
  cout << "Decrypted: " << decryptCaesar(cipherText, rshift) << endl;
 
  // separate line
  cout << endl;
 
  // Vigenere
  cout << "= Vigenere =" << endl;
  cout << endl;
  
  //Enter keyword
  cout << "Enter keyword: ";
  cin >> keyword;
  
  // Vigenere cipher encryption
  cipherText = encryptVigenere(plainText, keyword);
  cout << "Ciphertext: " << cipherText << endl;
  
  // decrypt Vingenere cipher
  cout << "Decrypted: " << decryptVigenere(cipherText, keyword) << endl;

  return 0;
}
