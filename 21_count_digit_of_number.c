#include <stdio.h>

int main(){
    int n, count;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        n/=10;
        count++;
    }

    printf("%d", count);
    

return 0;
}
