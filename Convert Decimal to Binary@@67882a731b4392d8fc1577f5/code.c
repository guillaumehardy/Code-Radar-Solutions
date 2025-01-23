#include <stdio.h>

int int_to_bit(int n)
{
    return (k == 0 || k == 1) ? k : (k % 2) + 10 * int_to_bit(n / 2);        
}

int main() 
{
    int a = 0;
    scanf("%d", &a);
    printf("%d", int_to_bit(a));
    return 0;
}