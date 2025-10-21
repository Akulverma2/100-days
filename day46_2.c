//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            
            for (int j = i + 1; j < len; j++) {
                if (str[i] == str[j]) {
                    printf("%c\n", str[i]);
                    return 0;
                }
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
