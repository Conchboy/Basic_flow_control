//
// Created by C2243829 on 2021/2/16.
//
#include <stdio.h>

int main(){

//    int i, j, k;
    float sum = 0;
    for (int i = 1; i <= 100; i++) {

        //sum += 1/(float)(i); //强制类转化: 格式(数据类型)(表达式)
        sum += 1.0 / i; //这样也可以, 推荐使用;
    }
    printf("sum = %.2f", sum); //必须用float输出;

    return 0;

}
