//Joey Fong
//Lab 3
//Date: 02/10/2020

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>
using namespace std;

int main()
{

  double min;
  double max;
  double eastSt, eastEl, westSt, westEl;
  string date, start_date, end_date;

  ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) 
  {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
  }

  string junk;        // new string variable
  getline(fin, junk); // read one line from the file 

  cout << "Enter starting date: ";
  cin >> start_date;

  cout << "Enter ending date: ";
  cin >> end_date;

  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) 
  { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 
  
  if ((date >= start_date) && (date <= end_date))  //if file date >= start_date && file date <= end_date
  {
    if (eastEl > westEl)
    {
      cout << date << " East" << endl;
    }
    else if (eastEl < westEl)
    {
      cout << date << " West" << endl;
    }
    else
    {
      cout << "Equal" << endl;
    }
  }

  }


  fin.close();

  return 0;
}
