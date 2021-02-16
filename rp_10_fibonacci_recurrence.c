//
// Created by C2243829 on 2021/2/17.
//
#include<stdio.h>
#include<stdlib.h>

int fibonacci(int a[],int m)
{
    if (m <=1)
    {
        return 1;//递归出口
    }
    return fibonacci(a, m - 1) + fibonacci(a, m - 2);
}
int main()
{
    int a[100] = { 0 };
    a[0] = 1;
    a[1] = 1;
    int result,m;
    printf("请输入要查找哪个斐波那契数\n");
    scanf("%d", &m);
    result = fibonacci(a,--m);
    printf("所查找的数是%d\n",result);
    system("pause");
    return 0;
}
