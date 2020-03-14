//Joey Fong
//February 26, 2020

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  ifstream fin("data.txt");
  if (fin.fail()) 
  {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
  }

  string color_rgb;

  while(getline(fin, color_rgb)) 
  {
   cout << color_rgb << endl;
  }


  fin.close();

  return 0;
}
