//
// Created by C2243829 on 2021/2/18.
//

#include <stdio.h>

int main() {

    int val;
    printf("Please let me know which floor you want to go? ");
    scanf("%d", &val);
    switch (val) {
        case 1:
            printf("first floor! \n");
            break; // IMPORTANT!! 这里的break起到隔离入口的作用, 可以想象成是一个隔板. 如果卸掉隔板, 那么从上往下相应的代码都会得到执行!

        case 2:
            printf("second floor! \n");
            break;

        case 3:
            printf("third floor! \n");
            break;

        case 4:
            printf("forth floor! \n");
            break;
        default:
            printf("there is no such floor!");
            break;
    }
    return 0;
}