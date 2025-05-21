int main(){
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i, j;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    for (i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }
    rev[i] = '\0';

    if (strcmp(str, rev) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
This program reads a string from the user, reverses it, and then compares the reversed string with the original string. If they are the same, it prints that the string is a palindrome; otherwise, it prints that the string is not a palindrome.

Feel free to ask if you need any further assistance or modifications!


}
