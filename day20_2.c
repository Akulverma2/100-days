//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <string.h>
int main() {
    char binary[65], ones_complement[65];
    int i, length;
    printf("Enter a binary number: ");
    scanf("%s", binary);
    length = strlen(binary);
    for (i = 0; i < length; i++) {
        if (binary[i] == '0') {
            ones_complement[i] = '1';
        } else if (binary[i] == '1') {
            ones_complement[i] = '0';
        } else {
            printf("Invalid binary number.\n");
            return 1;
        }
    }
    ones_complement[length] = '\0';
    printf("1's complement is: %s\n", ones_complement);
    return 0;
}