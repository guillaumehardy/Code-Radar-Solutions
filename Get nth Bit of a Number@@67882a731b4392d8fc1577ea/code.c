#include <stdio.h>

int main() 
{
    int a = 0;
    int b = 0;
    scanf("%d", &a, &b);
    printf("%s", (a >> b - 1) & 1);
    return 0;
}