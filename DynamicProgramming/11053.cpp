// BOJ_11053
// Dynamic Programming

#include <iostream>

using namespace std;

int main()
{

  int length;
  cin >> length;
  int dp[2][length + 1];

  // initialize array for dynamic programming
  for (int i = 1; i <= length; i++)
  {
    cin >> dp[0][i];
  }

  dp[1][1] = 1;

  for (int i = 2; i <= length; i++)
  {
    dp[1][i] = 1;
    for (int j = 1; j < i; j++)
    {
      if ((dp[0][j] < dp[0][i]) && (dp[1][j] + 1 > dp[1][i]))
      {
        dp[1][i] = dp[1][j] + 1;
      }
    }
  }

  int max = dp[1][1];

  for (int i = 2; i <= length; i++)
  {
    if (dp[1][i] > max)
      max = dp[1][i];
  }

  cout << max;

  return 0;
}