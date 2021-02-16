//
// Created by C2243829 on 2021/2/15.
//
# include <stdio.h>
int main()
{
    int sum = 0;

    for (int j = 3; j < 100; ++j)
    {
        if ( j%3 == 0)
        {
            sum += j;

        }

    }
    printf("%d", sum);
    return 0;
}

// 嵌套的for的执行顺序:
// for (1; 2; 3)
//        for (4; 5; 6)
//            A;
//            B;
// 执行顺序是: 1--> 2 --> 4 --> 5--> A --> 6 -->5 -->A --> 6 --> 5 -->
// 如果5条件不满足 --> 3 --> 2 --> 4--> 5 --> A --> 6 --> 5 --> A
// 当条件5 不满足的时候, 退回到上一级for;
// 当 条件2 也不满足的时候, 执行 B

// 进制:
//    1. 什么是n进制: 逢n进一
//    2. 把任意r进制转成十进制: 各个数位上的数字 * r**n累加
//    3. 把十进制转成任意r进制: 不停除r取余, 直到商蔚领. 而后将余数倒过来排列即为结果;
//    4. 不同进制所代表的数值之间的关系: 十进制的3981 专为 十六进制 是 F8D:
//    也就是3981(10) 和F8D(176) 本质上是一个数字, 只不过表达的方式不同而已.

