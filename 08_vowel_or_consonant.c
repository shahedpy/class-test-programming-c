#include <stdio.h>
int main()
{

    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    c = tolower(c);

    if (c >= 'a' && c <= 'z')
    {

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonent");
        }
    }
    else
    {
        printf("Invalid character");
    }

    return 0;
}
