//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
#include <stdlib.h>   // for abs()

int findDuplicate(int *nums, int numsSize) {

    for (int i = 0; i < numsSize; i++) {

        int index = abs(nums[i]);
        if (index >= numsSize) {
            return -1;
        }
        if (nums[index] < 0) {
            return index;
        }
        nums[index] = -nums[index];
    }

    return -1;
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers (each between 0 and %d):\n", n, n - 1);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int dup = findDuplicate(arr, n);
    printf("Duplicate number is: %d\n", dup);

    return 0;
}
