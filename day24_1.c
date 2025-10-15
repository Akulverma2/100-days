// Q47: Write a program to print the following pattern:
// *
// **
// ***
// ****
// *****

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=5; i++) // outer loop for rows
    {
        for(j=1; j<=i; j++) // inner loop for columns
        {
            printf("*"); // print star
        }
        printf("\n"); // new line after each row
    }
    return 0;
}