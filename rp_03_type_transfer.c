//
// Created by C2243829 on 2021/2/16.
//
#include <stdio.h>

int main(){

//    int i, j, k;
    float sum = 0;
    for (int i = 1; i <= 1000000; i += 2) {

        sum  += 1/(float)i;
    }
    printf("%.2f", sum);
    return 0;


}
