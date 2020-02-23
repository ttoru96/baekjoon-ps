//BOJ_1463
//Dynamic Programming

#include <iostream>

using namespace std;

int main()
{
  int input;
  cin >> input;

  int arr[input + 1];
  // initial conditions for dynamic programming
  arr[1] = 0;

  for (int i = 2; i <= input; i++)
  {
    int cnt;
    cnt = arr[i - 1] + 1;

    if (i % 2 == 0)
    {
      int temp;
      temp = arr[i / 2] + 1;
      if (cnt > temp)
        cnt = temp;
    }
    if (i % 3 == 0)
    {
      int temp;
      temp = arr[i / 3] + 1;
      if (cnt > temp)
        cnt = temp;
    }
    arr[i] = cnt;
  }

  cout << arr[input];

  return 0;
}