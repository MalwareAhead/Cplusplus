#include <iostream>
using namespace std;

int main()
{
  double euro;

  cout << "How many Euros do you have? ";
  cin >> euro;

  cout << euro << " EUR are " << euro * 1.13 << " GBP." << endl;

  return 0;
}
