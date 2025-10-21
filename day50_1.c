//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    int day, month, year;
    char monthName[4];
    scanf("%s", date);
    sscanf(date, "%d/%d/%d", &day, &month, &year);
    switch(month) {
        case 1: strcpy(monthName, "Jan"); break;
        case 2: strcpy(monthName, "Feb"); break;
        case 3: strcpy(monthName, "Mar"); break;
        case 4: strcpy(monthName, "Apr"); break;
        case 5: strcpy(monthName, "May"); break;
        case 6: strcpy(monthName, "Jun"); break;
        case 7: strcpy(monthName, "Jul"); break;
        case 8: strcpy(monthName, "Aug"); break;
        case 9: strcpy(monthName, "Sep"); break;
        case 10: strcpy(monthName, "Oct"); break;
        case 11: strcpy(monthName, "Nov"); break;
        case 12: strcpy(monthName, "Dec"); break;
        default: strcpy(monthName, "Err"); break;
    }
    printf("%02d-%s-%d\n", day, monthName, year);

    return 0;
}
