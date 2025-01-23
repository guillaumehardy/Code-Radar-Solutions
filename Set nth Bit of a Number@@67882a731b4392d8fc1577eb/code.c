#include <stdio.h>

int main() 
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int shift = 1;
    shift = shift << b;
    a = a | shift;
    printf("%d", a);
    return 0;
}