//
// Created by C2243829 on 2021/2/18.
//
#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c;
    double delta;
    double x1, x2;
    char yes_or_no = "";
    do {
        printf("please input the parameters of quadratic equation:");
        scanf("%lf %lf %lf", &a, &b, &c);
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = ((-b) + sqrt(delta)) / (2 * a);
            x2 = ((-b) - sqrt(delta)) / (2 * a);
            printf("there are 2 different solutions x1 = %.3f x2 = %.3f", x1, x2);

        } else if (delta == 0) {
            x1 = (-b) / (2 * a);
            //x2 = x1;
            printf("there are two equal solutions x1=x2= %lf ", x1);
        } else
            printf("there is no solution for this equation!!");

        printf("do you want to check another equation? Y/N");
        scanf("%c", yes_or_no);
    }   while (yes_or_no == "Y");

    return 0;
}