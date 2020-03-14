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
  int number_of_days = 0;
  double min;
  double max;
  double eastSt, eastEl, westSt, westEl;
  string date, earlier_date, later_date;
  string dates[500];
  double westEls[500];

  ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) 
  {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
  }

  string junk;        // new string variable
  getline(fin, junk); // read one line from the file 

  cout << "Enter earlier date: ";
  cin >> earlier_date;

  cout << "Enter later date: ";
  cin >> later_date;

  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) 
  { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns
                          
  
    if ((date >= earlier_date) && (date <= later_date))  //if file date >= earlier_date && file date <= later_date
    {
    //cout<<number_of_days<<endl;
    //cout<< date <<" "<< number_of_days<<endl;
    dates[number_of_days] = date;
    westEls[number_of_days] = westEl;
    number_of_days++;
    }
  
  }
  for(int i = number_of_days - 1; i >=0 ; i--)
  {
    cout << dates[i] << " " << westEls[i] << " ft" << endl;
  //cout << i <<endl;
  }
  
//cout<<number_of_days<<endl;

  fin.close();

  return 0;
}







