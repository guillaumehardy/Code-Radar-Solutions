#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    if(a < 0)
        printf("Negative");
    else
        printf("Positive");
    return 0;
}