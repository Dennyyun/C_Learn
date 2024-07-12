//
// Created by jyp21 on 2024/7/12.
//
#include "stdio.h"

int main() {
    int i;
    for (i = 1; i < 101; i++) {
        if (i % 3 == 0) {
            printf("%d is a multiple of 3\n",i);
        }
    }
    return 0;
}