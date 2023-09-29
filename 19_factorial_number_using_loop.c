#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int factorial = 1;


    while (n > 1) {
        factorial *= n;
        n--;
    }

    printf("Factorial: %d", factorial);

    return 0;
}
