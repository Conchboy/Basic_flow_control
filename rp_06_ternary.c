//
// Created by C2243829 on 2021/2/16.
//
// 三目运算符:
// A ? B : C 等价于:
// if (A)
//     B;
// else
//     C;
// 逗号表达式: (A, B, C, D)
// 从左到右执行. 这种表达式使用的场合不是很多

#include <stdio.h>

int main(){
    int i;
    int j = 2;
    i = (j++, ++j, j + 2, j - 3); // 这里 j + 2 这一表达式不是赋值语句, 不会改变j的值, 所以不影响结果;
    printf("i = %d\n", i);
    return 0;
}