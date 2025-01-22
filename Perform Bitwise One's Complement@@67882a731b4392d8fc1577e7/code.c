#include <stdio.h>

int main() 
{
    int a = 0;
    scanf("%d", &a);
    printf("%d", (a & 0xFF) + 1);
    return 0;
}