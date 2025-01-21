#include <stdio.h>
#include <stdlib.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char* c = malloc(sizeof(char));
    scanf("%c", c);
    printf("%d", *((int)c));
    return 0;
}