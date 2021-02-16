//
// Created by C2243829 on 2021/2/16.
//
// 运算符附录(不太用)
// 自增和自减运算符: 分类: 前自增++i和后自增i++
// 前自增整体表达式的值是i加1以后的值
// 后自增整体表达式的值是i加1以前的值
// 自增的意义: 1. 自增让代码简洁; 2. 自增的速度更快, 在cpu内部的寄存器里面执行, 而不用读取内存;
// 学习自增要注意的问题: 1. 在代码中尽量屏蔽掉前自增和后自增的差别
// 2. 自增表达式i++最好不要作为完整的复合语句的的一部分使用;
// 比如: int m = i ++ + ++i + i ++ 这用写的代码不可移植, 不同的系统中不同
// 顺序点: , (), ;三类符号, 而其他的运算符不是顺序点

#include "stdio.h"

int main(){
    int i, j, k, m;
    i = j = 3;
    k = i ++; //k = 3;先赋值后自增;
    m = ++j; // m = 4;先自增后赋值;
    printf("i = %d, j = %d, k = %d, m = %d", i, j, k, m);

    return 0;
}