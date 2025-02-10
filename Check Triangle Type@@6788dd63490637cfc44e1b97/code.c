#include <stdio.h>

int main()
{
  int a = 0;
  int b = 0;
  int c = 0;

  scanf("%d %d %d", &a, &b, &c);
 
  if(a == 0 || b == 0 || c == 0)
  {
	printf("%s\n", "Invalid sizes");
	return 1; //EXIT_FAILURE
  }

  int max = 0;
  int line1 = 0;
  int line2 = 0;
  if(a > b)
  {
	if(c > a)
	{
  	max = c;
  	line1 = a;
  	line2 = c;
	}
	else
	{
  	max = a;
  	line1 = b;
  	line2 = c;
	}
  }
  else if(b > c)
  {
	max = b;
	line1 = a;
	line2 = c;
  }
  else
  {
	max = c;
	line1 = a;
	line2 = b;
  }
 
  if(line1 + line2 <= max)
  {
	printf("%s\n", "Invalid sizes");
	return 1;
  }

  if(line1 == line2 && line2 == max)
  {
	printf("%s\n", "Equilateral");
	return 0;
  }

  if (line1 == line2 && line2 != max)
  {
	printf("%s\n", "Isosceles");
	return 0;
  }
  else
  {
	printf("%s\n", "Scalene");
	return 0;
  }
}
