#include <stdio.h>

int main()
{
    char c = '\0';

    scanf("%c", &c);

    if(c >= 'a' && c <= 'z')
    {
        switch(c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
                printf("Vowel");
                break;
            default:
                printf("Consonant");
                break;
        }
    }
    else if(c >= 'A' && c <= 'Z')
    {
        switch(c)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'Y':
                printf("Vowel");
                break;
            default:
                printf("Consonant");
                break;
        }
    }
    else if(c >= '0' && c <= '9')
        printf("Digit");
    else
        printf("Special Character");
    return 0;
}