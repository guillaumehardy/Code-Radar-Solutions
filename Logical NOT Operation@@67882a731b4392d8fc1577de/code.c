#include <stdio.h>

int main() 
{
    int a = 0;
    scanf("%d", &a);
    if (!(a > 0))
        printf("%s", "True");
    else
        printf("%s", "False");
    return 0;
}