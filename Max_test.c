//
// Created by jyp21 on 2024/7/12.
//
#include "stdio.h"

int main() {
    int a, b, max;
    scanf("%d %d", &a, &b);
    max = a > b ? a : b;
    printf("%d",max);
    return 0;
}