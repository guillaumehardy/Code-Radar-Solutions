#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a = 0;
    scanf("%d", &a);
    printf("%d", ~a - 1);
    return 0;
}