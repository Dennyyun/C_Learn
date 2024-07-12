//
// Created by jyp21 on 2024/7/12.
//
#include "stdio.h"

int main() {
    int number_arr[] = {15, 16, 17, 18, 19, 20, 21, 1, 13, 4, 5, 6};
    printf("please enter your number:\n");
    int number, index=-1;
    scanf("%d", &number);

    int length = sizeof(number_arr) / sizeof(number_arr[0]);
    for (int i = 0; i < length; ++i) {
        if (number == number_arr[i]) {
            index = i;
            break;
        }
    }
    if(index != -1){
        printf("number index is %d \n",index);
    } else{
        printf("Not Found\n");
    }
    return 0;
}
