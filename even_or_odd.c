// Problem: Check if a number is even or odd.
#include <stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number%2 == 0){
        printf("The number is even");
    } else {
        printf("The number is odd");
    }
}