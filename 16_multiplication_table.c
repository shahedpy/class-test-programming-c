#include <stdio.h>

int main()
{
    int n, c;

    printf("Enter value for n: ");
    scanf("%d", &n);
    printf("Enter Number: ");
    scanf("%d", &c);

    for (int i = 1; i <= n; i++)
    {
        printf("%d X %d = %d\n", c, i, c * i);
    }

    return 0;
}
