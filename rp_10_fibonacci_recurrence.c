//
// Created by C2243829 on 2021/2/17.
//
/**
 * this is a typical notation for C/C++
 */
 // Ctrl + W ������ѡ��Χ
 // Ctrl + D and Ctrl + X
 // ע��: ctrl +/ or Ctrl + Shift + /
 // Ctrl + "+"/"-" ��,�۵�������;
 // Ctrl + Shift + "+"/"-" �۵������е�
 // Ctrl + Shift + ���<--, backward
 // Ctrl + Alt + L ��ʽ������;


#include<stdio.h>
#include<stdlib.h>

int fibonacci(int a[], int m) {
    if (m <= 1) {
        return 1;//�ݹ����
    } else return fibonacci(a, m - 1) + fibonacci(a, m - 2);
}

int main() {
    int a[100] = {0};
    a[0] = 1;
    a[1] = 1;
    int result, m;
    printf("������Ҫ�����ĸ�쳲�������\n");
    scanf("%d", &m);
    result = fibonacci(a, --m);
    printf("�����ҵ�����%d\n", result);
    system("pause");
    return 0;
}
