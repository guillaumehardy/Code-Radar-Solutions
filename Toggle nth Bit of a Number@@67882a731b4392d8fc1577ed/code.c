#include <stdio.h>

int main() 
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int shift = 1 << b;
    printf("%d", a ^ shift);
    return 0;
}