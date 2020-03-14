//Joey Fong
//Date: 02/03/2020

#include <iostream>
using namespace std;

int main()
{

 // Logic:
 // set sum = 0
 // read next num
 // add next num to sum
 // print sum

  int sum_num = 0;    // set sum to 0
  int next_num = 0;   // set next num to 0
  
  while (cin >> next_num)  // While the reading operation is a success
    {  
    sum_num = sum_num + next_num;  // sum = sum + next num
    }
  cout << sum_num << endl;  // print the sum
}
