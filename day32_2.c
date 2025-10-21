//Q64: Find the digit that occurs the most times in an integer number.
/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/
#include <stdio.h>
int main() {
    int num;
    printf("integer: ");
    scanf("%d", &num);
    int count[10] = {0};
    while(num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    int max_count = 0, most_frequent_digit = 0;
    for(int i = 0; i < 10; i++) {
        if(count[i] > max_count) {
            max_count = count[i];
            most_frequent_digit = i;
        }
    }
    printf("Most frequent digit: %d\n", most_frequent_digit);
    return 0;
}
