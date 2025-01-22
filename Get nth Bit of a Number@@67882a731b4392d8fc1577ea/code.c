#include <stdio.h>

int main() 
{
    int a = 0;
    int b = 0;
    scanf("%d", &a, &b);
    if(b == 0)
        printf("%d", a & 1);
    else
        printf("%d", (a >> b - 1) & 1);
    return 0;
}