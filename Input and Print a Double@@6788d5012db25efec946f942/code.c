#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main()
 {
    float input = 0.0;
    scanf("%gf", &input);
    printf("You entered: %.4f", input);
    return 0;
}