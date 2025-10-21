//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for(i = 0; i < len; i++) {
        if(str[i] == ' ') {
            spaces++;
        } else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
        } else {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}
