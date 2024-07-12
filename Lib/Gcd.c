//
// Created by jyp21 on 2024/7/12.
//
#include "stdio.h"

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    while (b != 0) {
        int temp;
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d",a);
    return 0;
}