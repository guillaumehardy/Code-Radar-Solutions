#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main()
 {
    double input = 0.0;
    scanf("%g", &input);
    printf("You entered: %.4g", input);
    return 0;
}