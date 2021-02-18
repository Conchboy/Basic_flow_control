//
// Created by C2243829 on 2021/2/18.
//
#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c;
    double delta;
    double x1, x2;
    char ch;
    do {
        printf("please input the parameters of quadratic equition:");
        scanf("%f %f %f", &a, &b, &c);
        delta  = b*b - 4 * a * c;
        if(delta > 0){
            x1 = ((-b) + sqrt(delta)) / (2 * a);
            x2 = ((-b) - sqrt(delta)) / (2 * a);
            printf("there are 2 different solutions x1 = %.3f x2 = %.3f", x1, x2);

        }else if (delta == 0)
        {
            x1 = ((-b)  / (2 * a);
            x2 = x1;
        }else
            printf("there is no solution for this equition!!");
    }
    printf("do you want to check another equition? Y/N");
    scanf("%c", char);
    while char == "Y";

    return 0;
}