#include <stdio.h>

int main() 
{
    int a = 0;
    scanf("%d", &a);
    int n = 0;
    while((a & 1) != 1 && a != 0)
    {
        a = a >> 1;
        n += 1;
    }
    if(a == 0)
        return 0;
    printf("%d", n);
    return 0;
}