// Joey Fong
// Date: 02/03/2020

/*

This program takes in a file with which content:

100 + 50 - 25 + 0 + 123 - 1

then calculate the sum of the operations.

*/

/* 

Logic: 

x = x + y

where:

sum = x
next number = y

sum = 100

while ( char, y is entered)

then sum = sum + 50 (if char '+' is present)
then sum = sum - 25 (if char '-' is present)
then sum = sum + 0  (if char '+' is present)
then sum = sum + 123 (if char '-' is present)
and so on...

else
print sum

end

*/

#include <iostream>
using namespace std;

int main()
{
  int sum_num = 0;
  int next_num = 0;
  char operation;
  
  cin >> sum_num;
  
  while (cin >> operation >> next_num)
  {
    if (operation == '+')
    {
      sum_num = sum_num + next_num;
    }
    else if (operation == '-')
    {
      sum_num = sum_num - next_num;
    }
  }
  cout << sum_num << endl;
}
