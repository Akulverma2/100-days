// Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>
int main()
{
    int i, j, k;
    for(i=5; i>=1; i--) // outer loop for rows
    {
        for(k=5; k>i; k--) // inner loop for spaces
        {
            printf(" "); // print space
        }
        for(j=1; j<=i; j++) // inner loop for stars
        {
            printf("*"); // print star
        }
        printf("\n"); // new line after each row
    }
    return 0;
}