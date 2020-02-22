#include <stdio.h>
#include <string>

using namespace std;

int main()
{
  char ch;
  int i = 0;

  while ((ch = getchar()) != '\n')
  {
    if (i == 10)
    {
      putchar('\n');
      putchar(ch);
      i = 1;
    }
    else
    {
      putchar(ch);
      i++;
    }
  }

  return 0;
}