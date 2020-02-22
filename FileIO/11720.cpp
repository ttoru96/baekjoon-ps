#include <iostream>

using namespace std;

int main()
{
  int cnt;
  string numbers;
  int sum = 0;
  cin >> cnt;
  cin >> numbers;

  for (int i = 0; i < cnt; i++)
  {
    // Following is a simple way of converting 'single' digit string to integer.
    // eg. '1' --> 1
    int temp = numbers.at(i) - '0';
    sum += temp;
  }
  cout << sum << endl;
  return 0;
}