#include <stdio.h>

int main() 
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a , &b);
    int tmp = a | b;
    printf("%s", tmp);
    return 0;
}