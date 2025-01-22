#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int shift = 1;
    scanf("%d %d", &a, &b);
    shift = shift << b;
    printf("%s", a ^ shift);
    return 0;
}