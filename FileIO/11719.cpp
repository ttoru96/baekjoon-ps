#include <iostream>
#include <string>

using namespace std;

int main()
{
  string line;

  // string::getline returns false when there is error or end of file
  // cin.eof() is an explicit way of checking end of file
  while (getline(cin, line))
  {
    cout << line << endl;
  }
  return 0;
}