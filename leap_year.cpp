#include <iostream>
using namespace std;

int main()
{
  int year;

  cout << "Type in a year to see if it is a leap year: ";
  cin >> year;

  if(year >= 0 && year <= 9999)
  {
    if(year % 4 == 0 && year % 100 != 0)
    {
      cout << year << " is a leap year." << endl;
    }
    else
    {
      cout << year << " is not a leap year." << endl;
    }
  }

  return 0;
}
