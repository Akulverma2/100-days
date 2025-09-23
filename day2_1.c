//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main (){
    int a,b;
    scanf("%d%d", &a,&b);
    printf("Area of the rectangle is %d\n",a*b);
    printf("perimeter of rectangle is %d\n",2*(a+b));
        return 0;
    }
