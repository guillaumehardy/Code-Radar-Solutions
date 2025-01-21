#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char* s1 = malloc(sizeof(char)*30);
    char* s2 = malloc(sizeof(char)*30);
    scanf("%s %s", s1, s2);
    printf("You entered: %s and %s", s1, s2);
    return 0;
}