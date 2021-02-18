//
// Created by C2243829 on 2021/2/17.
//
#include "stdio.h"

int main() {
    int n;
    int i;
    int f3, f2, f1;
    f2 = 1;
    f1 = 1;
    printf("请输入你需要求的项的序列:");
    scanf("%d", &n);
    if (1 == n) {
        f3 = 1;
    } else if (2 == n) {
        f3 = 1;
    } else {

        for (i = 3; i <= n; ++i) {
            f3 = f2 + f1;
            f1 = f2;
            f2 = f3;
        }
    }
    printf("n = %d", f3);

    return 0;
}
