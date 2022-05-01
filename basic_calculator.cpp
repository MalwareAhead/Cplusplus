#include <iostream>

using namespace std;

int main()
{
  int num_1, num_2;

  cout << "Please type in the first operand: ";
  cin >> num_1;
  cout << "Please type in the second operand: ";
  cin >> num_2;

  cout << endl << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
  cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
  cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
  cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
  cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << endl;

  return 0;
}
