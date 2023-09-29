#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int sum = 0;
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
            count++;
        }
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("Average of all odd numbers from 1 to %d is %.2lf\n", n, average);
    }

    return 0;
}
