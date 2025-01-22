#include <stdio.h>

int main() 
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("%s", "True");
    else
        printf("%s", "False"); 
    return 0;
}