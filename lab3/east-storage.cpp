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

string given_date, date;
double eastSt, eastEl, westSt, westEl;

ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}

string junk;        // new string variable
getline(fin, junk); // read one line from the file 

cout << "Enter a date (in mm/dd/yyyy format): " << endl;
cin >> given_date;  

while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 

if(given_date == date)
  {
    // for example, to print the date and East basin storage:
    cout << "East basin storage: " << eastSt << " billion gallons" << endl;
  }
                          
}

fin.close();

  return 0;
}
