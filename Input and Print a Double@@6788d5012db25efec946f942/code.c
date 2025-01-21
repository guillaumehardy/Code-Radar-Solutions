#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main()
 {
    double input = 0.0;
    scanf("%f", &input);
    printf("You entered: %f", input);
    return 0;
}