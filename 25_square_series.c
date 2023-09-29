#include <stdio.h>

int main()
{
    int N;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Print the series
    printf("Series: ");
    for (int i = 1; i <= N; i++)
    {
        if (i < N)
        {
            printf("%d² + ", i);
        }
        else
        {
            printf("%d²", i);
        }
    }
    printf("\n");

    return 0;
}
