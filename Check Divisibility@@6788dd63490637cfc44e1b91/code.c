#include <stdio.h>

int main()
{
  int a = 0;
  scanf("%d", &a);
  if(a % 5 == 0 && a % 11 == 0)
  {
    printf("%s", "Divisible");
  }
  else 
  {
    printf("%s", "Not Divisible")
  }
  return 0;
}