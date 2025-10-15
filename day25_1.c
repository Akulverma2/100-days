// Q49: Write a program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345

/*
Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/
#include <stdio.h>
int main()
{
    int i, j;
    for(i=5; i>=1; i--) // outer loop for rows
    {
        for(j=i; j<=5; j++) // inner loop for columns
        {
            printf("%d", j); // print number
        }
        printf("\n"); // new line after each row
    }
    return 0;
}