#include <stdio.h>

int int_to_bit(int n)
{
    return (n == 0 || n == 1) ? n : (n % 2) + 10 * int_to_bit(n / 2);        
}

int main() 
{
    int a = 0;
    scanf("%d", &a);
    printf("%d", int_to_bit(a));
    return 0;
}