#include <stdio.h>
#define pi 3.14

int main() {
    float input = 0.0;
    scanf("%f", &input);
    printf("%.2f", input * input * pi);
    return 0;
}