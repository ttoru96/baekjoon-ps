#include <iostream>
#include <string>

using namespace std;

int main()
{
  ios_base ::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string line;
  getline(cin, line);
  while (line.length() > 0)
  {
    cout << line << endl;
    getline(cin, line);
  }

  return 0;
}