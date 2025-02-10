#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    if(a >= 60)
        printf("Eligible");
    else
        printf("Not Eligible");
    return 0;
}