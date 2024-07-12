//
// Created by jyp21 on 2024/7/12.
//
#include "stdio.h"

int main() {
    int number1, number2, number3;
    printf("please enter three integers\n");
    scanf("%d %d %d", &number1, &number2, &number3);
    if (number1 < number2) {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }
    if (number1 < number3) {
        int temp = number1;
        number1 = number3;
        number3 = temp;
    }
    if (number2 < number3) {
        int temp = number2;
        number2 = number3;
        number3 = temp;
    }
    printf("%d %d  %d\n", number1, number2, number3);
    return 0;
}