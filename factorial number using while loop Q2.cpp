#include <stdio.h>

int main() {
    int num, factorial = 1, i;

    // Taking user input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    
        i = num;
        while (i > 0) {
            factorial *= i;
            i--;
        }
        printf("Factorial of %d is %d\n", num, factorial);
    

    return 0;
}

