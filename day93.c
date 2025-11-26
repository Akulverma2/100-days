//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student s[3];
    struct Student topper;
    topper.marks = -1; 
    printf("Enter details of 3 students:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
        if (s[i].marks > topper.marks) {
            topper = s[i];
        }
    }
    printf("\nTopper: %s (Marks: %d)\n", topper.name, topper.marks);

    return 0;
}