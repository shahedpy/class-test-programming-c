#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        int r = n % 10;
        n /= 10;
        printf("%d", r);
    }

    return 0;
}
