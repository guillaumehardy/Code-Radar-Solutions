#include <stdio.h>

int main()
{
  char a = 0;
  scanf("%c", &a);
  if(a >= 'A' && a <= 'Z')
  {
    printf("%s", "Uppercase");
  }
  if (a >= 'a' && a <= 'z')
  {
    printf("%s", "Lowercase");
  }
  return 0;
}