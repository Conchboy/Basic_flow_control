//
// Created by C2243829 on 2021/2/18.
//
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta;
    double x1, x2;
    char yesOrNo;
    do {
        printf("please input the parameters of quadratic equation:\n");
        printf("a = ");
        scanf("%lf", &a);
        printf("b = ");
        scanf("%lf", &b);
        printf("c = ");
        scanf("%lf", &c);
        delta = (b * b - 4 * a * c);
        if (delta > 0) {
            x1 = ((-b) + sqrt(delta)) / (2 * a);
            x2 = ((-b) - sqrt(delta)) / (2 * a);
            printf("there are 2 different solutions x1 = %.3f x2 = %.3f \n", x1, x2);

        } else if (delta == 0) {
            x1 = (-b) / (2 * a);
            //x2 = x1;
            printf("there are two equal solutions x1 = x2 = %lf \n", x1);
        } else
            printf("there is no solution for this equation!!\n");

        printf("Do you want to check another equation? (Y/N):\n");
        scanf(" %c", &yesOrNo); //%c的前面必须有一个空格, 原因复杂略.
    }
    while ('y' == yesOrNo || 'Y' == yesOrNo);//这里把Y or y写在yesOrNo的前面, 是为了防止少写一个等号时出现赋值但是不报错!!

    return 0;
}