#include <stdlib.h>
#include <stdio.h>


int main() {
    char* name = malloc(sizeof(char) * 30);
    int age = 0;
    char* hobby = malloc(sizeof(char) * 30);
    scanf("%s", name);
    scanf("%d", age);
    scanf("%s", hobby);
    printf("Name: %s\nAge: %d\nHobby: %s\n", name, age, hobby);
    return 0;
}