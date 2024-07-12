//
// Created by jyp21 on 2024/7/12.
//
#include <stdio.h>

int main() {

    int year;
    for ( year = 0; year <= 2000; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d is a leap year\n", year);
        } else {
            printf("No  a leap year\n");
        }
    }

    return 0;
}