//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    for (int i = 0; i < len; i++) {
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' ')) {
            printf("%c.", name[i]);
        }
    }
    // Print the surname in full
    char *last_space = strrchr(name, ' ');
    if (last_space != NULL) {
        printf(" %s", last_space + 1);
    }
    printf("\n");
    return 0;
}
