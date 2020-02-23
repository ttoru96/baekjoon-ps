// BOJ_10844
// Dynamic Programming

#include <iostream>

using namespace std;

int main()
{
  int num;
  cin >> num;

  long array[num + 1][10];

  // initialize array for Dynamic Programming
  array[1][0] = 0;
  for (int i = 1; i < 10; i++)
  {
    array[1][i] = 1;
  }

  for (int i = 2; i <= num; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (j == 0)
        array[i][j] = (array[i - 1][j + 1]) % 1000000000;
      else if (j == 9)
        array[i][j] = (array[i - 1][j - 1]) % 1000000000;
      else
      {
        array[i][j] = (array[i - 1][j - 1] + array[i - 1][j + 1]) % 1000000000;
      }
    }
  }

  long sum = 0;
  for (int i = 0; i < 10; i++)
  {
    sum += (array[num][i]) % 1000000000;
  }

  cout << sum % 1000000000;

  return 0;
}