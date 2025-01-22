#include <stdio.h>

int main() 
{
    int a = 0;
    scanf("%d", &a);
    if(a & 1)
        printf("%s", "Set");
    else
        printf("%s","Not Set");
    return 0;
}