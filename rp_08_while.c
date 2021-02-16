//
// Created by C2243829 on 2021/2/17.
//while:
// 1. 执行顺序 --> 顺序执行
// 2. for and while are inter changable;
// 3. while不如for有逻辑性, 更不容易出错, 推荐使用;
#include "stdio.h"
int main(){
    int sum = 0;
    int i;
    for (i = 0; i <=100; ++i) {
        sum += i;
    }
    printf("sum = %d\n", sum);

    sum = 0;
    i = i - 1;
    while (i >0)
    {
        sum = sum + i;
        i--;
    }
    printf("sum = %d", sum);

    return 0;

}

