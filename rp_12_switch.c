//
// Created by C2243829 on 2021/2/18.

    // break 如果用于for 和 while循环, 那就是退出循环; break 用于switch, 退出switch
// k但是break不能直接用于if语句, 除非if语句是循环或者switch的一部分;
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