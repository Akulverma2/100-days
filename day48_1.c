//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int isRotation(char *str1, char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }
    char temp[100];
    strcpy(temp, str1);
    strcat(temp, str1);
    return strstr(temp, str2) != NULL;
}

int main() {
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);

    if (isRotation(str1, str2)) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    return 0;
}
