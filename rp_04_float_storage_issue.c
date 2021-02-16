//
// Created by C2243829 on 2021/2/16.
//
// float and double type both can NOT storage the decimal fraction number PRECISELY.
# include<stdio.h>

int main(){
    float i;
    float sum = 0;
    for (i = 1; i <= 100; ++i)
        sum += 1/i;
    printf("sum = %f \n", sum);
    return 0;

}