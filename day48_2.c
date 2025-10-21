//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char *word_start = NULL;
    char *word_end = NULL;
    for (char *ptr = sentence; *ptr != '\0'; ptr++) {
        if (*ptr == ' ' || *ptr == '\n') {
            if (word_start != NULL) {
                word_end = ptr - 1;
                reverseWord(word_start, word_end);
                word_start = NULL;
            }
        } else {
            if (word_start == NULL) {
                word_start = ptr;
            }
        }
    }
    if (word_start != NULL) {
        word_end = sentence + strlen(sentence) - 1;
        reverseWord(word_start, word_end);
    }

    printf("%s\n", sentence);
    return 0;
}
