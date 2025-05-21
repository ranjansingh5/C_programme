#include <stdio.h>

int main() {
    int num, quotient, product;
    printf("Enter a number: ");
    scanf("%d", &num);
    quotient = num / 7;
    product = quotient * 7;  
    if (product == num) {
        printf("%d is divisible by 7\n", num);
    } else {
        printf("%d is not divisible by 7\n", num);
    }

    return 0;
}

