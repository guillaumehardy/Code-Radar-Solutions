#include <stdio.h>

int main() 
{
    int a = 0;
    scanf("%d", &a);
    int result = 0;
    while(a != 0)
    {
        result += a % 2;
        a /= 2;
        result *= 10;
    }
    printf("%d", result);
    return 0;
}