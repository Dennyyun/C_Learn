//
// Created by jyp21 on 2024/7/12.
//
#include "stdio.h"
#include "math.h"

int main() {
    for (int i = 100; i <= 200; i++) {
        int is_prime = 1;
        for (int j = 2; j < sqrt(i); j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d is a prime number\n", i);
        }
    }
    return 0;
}