#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main()
 {
    double float input = 0.0;
    scanf("%gf", &input);
    printf("You entered: %gf", input);
    return 0;
}