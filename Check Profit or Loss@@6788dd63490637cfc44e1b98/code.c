#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    if(a == b)
        printf("No Profit No Loss");
    if(a < b)
        printf("Profit");
    else
        printf("Less");
    return 0;
}