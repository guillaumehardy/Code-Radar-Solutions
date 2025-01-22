#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() 
{
    int a = 0;
    scanf("%d", &a);
    int n = 0;
    while(n < 32 && a != 0 && a & 1 == 0)
    {
        n += 1
        a = a >> 1;
    }
    printf("%d", n);
    return 0;
}