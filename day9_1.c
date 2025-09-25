// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <math.h>
#include <stdio.h>
int main () {
    int a,b,c,d;
    printf("Enter the coefficients a, b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if (d>0) {
        printf("Root 1:%f\n",(-b+sqrt(d))/(2*a));
        printf("Root 2:%f\n",(-b-sqrt(d))/(2*a));
        printf("Roots are real and different\n");
    } else if (d==0){
        printf("Root:%f\n",(-b)/(2*a));
        printf("Roots are real and same\n");
    } else {
        printf("roots are complex\n");
    }
    return 0;
    
}
