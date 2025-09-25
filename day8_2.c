// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && a>=c) {
        printf("largest number is %d\n",a);
    } else if (b>=a && b>=c) {
        printf("Largest number is %d\n",b);
    } else if (c>=a && c>=b) {
        printf("Largest number is %d\n",c);
    }
    return 0;
}