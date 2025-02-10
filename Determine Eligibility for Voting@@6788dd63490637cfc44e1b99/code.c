#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    if(a < 18)
        printf("Not Eligible");
    else
        printf("Eligible");
    return 0;
}