#include <stdio.h>

int main() {
    int year;

    printf("input the year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("is this year %d the leap year? : 1\n", year);
    } else {
        printf("is this year %d the leap year? : 0\n", year);
    }

    return 0;
}
