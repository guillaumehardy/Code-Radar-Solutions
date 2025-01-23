#include <stdio.h>

int main() 
{
    int a = 0;
    scanf("%d", &a);
    (a == 0) ? printf("Zero") : (a < 0) ? printf("Negative") : printf("Positive");
    return 0;
}