#include <stdio.h>

int main()
{
  int a = 0;
  scanf("%d", &a);
  if((a % 4) == 0)
  {
    if((a % 400) == 0)
    {
      printf("%s", "Leap Year");
    }
    else if((a % 100) == 0)
    {
      printf("%s", "Not a Leap Year");
    }
    else 
    {
      printf("%s", "Leap Year");
    }
  }
  else 
  {
    printf("%s", "Not a Leap Year");
  }
  return 0;
}
