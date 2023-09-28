#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Enter value for c: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a (%d) is the largest number", a);
    }
    else if (b > a && b > c)
    {
        printf("b (%d) is the largest number", b);
    }
    else
    {
        printf("c (%d) is the largest number", c);
    }

    return 0;
}
