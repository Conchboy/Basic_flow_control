//
// Created by C2243829 on 2021/2/15.
//
//求1到100之间的奇数之和
// 求1 到100之间的奇数的个数
// 求1到100之间的奇数的平均值
// 求1到100之间的奇数和与偶数和
# include<stdio.h>
int main()
{
    int i;
    int sum = 0;
    int count = 0;
    int even_sum = 0;
    for (i = 1; i <= 100; i += 2)
    {
        sum += i;
        count += 1;
        even_sum += (i+1);
    }
    printf("sum = %d, count = %d, average = %d, even_sum = %d ", sum, count, sum/count, even_sum);

}
