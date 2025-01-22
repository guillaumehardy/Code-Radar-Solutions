#include <stdio.h>

int main() 
{
    int a = 0;
    scanf("%d", &a);
    int n = 0;
    while(a != 0 && n != 0)
    {
        a = a >> 1;
        n -= 1;
    }
    printf("%d", n);
    return 0;
}