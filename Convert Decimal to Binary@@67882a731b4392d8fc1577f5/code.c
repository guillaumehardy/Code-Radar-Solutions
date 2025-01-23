#include <stdio.h>

int int_to_bit(int n)
{
    return (n == 0 || n == 1) ? n : (n % 2) + 10 * int_to_bit(n / 2);        
}

int main() 
{
    int a = 0;
    scanf("%d", &a);
    char res[32];
    for(int i = 0; i < 32; i++)
        res[i] = '0';
    int i = 0;
    if(a < 0)
        res[31] = 1;
    while(a != 0 && i < 31)
    {
        (a % 2 == 0) ? res[i] = '0' : res[i] = '1';
        i += 1;
        a /= 2;
    }
    printf(res);
    return 0;
}