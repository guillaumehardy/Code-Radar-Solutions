#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() 
{
    int input = 0;
    scanf("%d", input);
    printf("Hexadecimal: %X\nOctal: %o", input);
    return 0;
}