#include <stdio.h>

int main()
{
    int n;
    double sum = 0.0;

    printf("Enter element counts: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        double input;
        printf("Enter number: ");
        scanf("%lf", &input);
        sum += input;
    }

    double avg = sum / n;
    printf("Average: %lf", avg);

    return 0;
}
