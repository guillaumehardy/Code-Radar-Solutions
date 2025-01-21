#include <stdio.h>

int main() {
    char* s = malloc(sizeof(char));
    scanf("%s", s);
    printf("You entered: %s", s);
    return 0;
}