//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char buffer[256];
    file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    printf("Enter text to append: ");
    fgets(buffer, sizeof(buffer), stdin);
    fputs(buffer, file);
    fclose(file);

    printf("File updated successfully with appended text.\n");
    return EXIT_SUCCESS;
}
