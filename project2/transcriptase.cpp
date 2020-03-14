//Joey Fong
//13 March 2020
/*
Project2A

Your task is to write a program called transcriptase.cpp that reads a text file called dna.txt that contains one DNA strand per line, which looks as follows:

AAGATGCCG
ATGCCGTAAGATGCGGTAAGATGC
CCGTAAGATGCCGTA
. . . 

and outputs to the console (terminal) the corresponding mRNA strands. Each output line must contain exactly one mRNA strand. This is a sample output of the program:

$ ./transcriptase
UUGUACGGC
UACGGCAUUCUACGCCAUUCUACG
GGCAUUCUACGGCAU
...

*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

char DNAbase_to_mRNAbase(char c)
{
  if(c == 'A' || c == 'a')
  {
    return 'U';
  }
  else if (c == 'T' || c == 't')
  {
    return 'A';
  }
  else if (c == 'C' || c == 'c')
  {
    return 'G';
  }
  else
  {
    return 'C';
  }
}

string DNA_to_mRNA(string dna)
{
  string mRNA;
  
  for (int i=0; i < dna.length(); i++)
  {
    mRNA += DNAbase_to_mRNAbase(dna[i]);
  }
  
  return mRNA;
}

int main()
{

  ifstream fin ("dna.txt");
  if(fin.fail())
  {
    cerr << "File cannot be read, opened, or does not exist.\n";
    exit(1);
  }

  string strand;
  while(getline(fin, strand))
  {
    cout << DNA_to_mRNA(strand) << endl;
  }
  
  fin.close();
}
