//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[100], longest[100];
    int i, len, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char *word = strtok(sentence, " ");
    while (word != NULL) {
        len = strlen(word);
        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }

    printf("%s\n", longest);
    return 0;
}
