#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    a ^= b;
    b ^= a;
    a ^= b;
    printf("%d %d", a, b);
    return 0;
}