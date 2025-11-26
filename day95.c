//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
struct Student getTopStudent(struct Student arr[], int n) {
    struct Student top = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i].marks > top.marks) {
            top = arr[i];
        }
    }
    return top;
}

int main() {
    struct Student s[3];
    for (int i = 0; i < 3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }
    struct Student t = getTopStudent(s, 3);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", t.name, t.roll, t.marks);

    return 0;
}
