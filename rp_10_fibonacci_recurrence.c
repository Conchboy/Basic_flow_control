//
// Created by C2243829 on 2021/2/17.
//
#include<stdio.h>
#include<stdlib.h>

int fibonacci(int a[],int m)
{
    if (m <=1)
    {
        return 1;//�ݹ����
    }
    return fibonacci(a, m - 1) + fibonacci(a, m - 2);
}
int main()
{
    int a[100] = { 0 };
    a[0] = 1;
    a[1] = 1;
    int result,m;
    printf("������Ҫ�����ĸ�쳲�������\n");
    scanf("%d", &m);
    result = fibonacci(a,--m);
    printf("�����ҵ�����%d\n",result);
    system("pause");
    return 0;
}
