#include <stdio.h>

int main() 
{
    int a = 0;
    scanf("%d", &a);
    int result = 0;
    while(a != 0)
    {
        result += a & 1;
        a >>= 1;
        result *= 10;  
    }
    //result = ~result;
    printf("%d", result);
    return 0;
}