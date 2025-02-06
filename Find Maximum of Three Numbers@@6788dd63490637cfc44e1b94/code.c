#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b)
    {
        if(c > a)
            printf("%d", c);
        else
            printf("%d", a);
    }
    else if(a > c)
        printf("%d", b);
    else if(c > b)
        printf("%d", c);
    return 0;
}