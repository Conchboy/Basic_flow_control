//
// Created by C2243829 on 2021/2/18.

// break �������for �� whileѭ��, �Ǿ����˳�ѭ��; break ����switch, �˳�switch
// ����break����ֱ������if���, ����if�����ѭ������switch��һ����;
// break ��ֹ���������ѭ���������switch;
// continue������������ѭ�����µ����, ת���ж��Ƿ����ѭ��!

#include <stdio.h>

int main() {

    int val;
    printf("Please let me know which floor you want to go? ");
    scanf("%d", &val);
    switch (val) {
        case 1:
            printf("first floor! \n");
            break; // IMPORTANT!! �����break�𵽸�����ڵ�����, �����������һ������. ���ж������, ��ô����������Ӧ�Ĵ��붼��õ�ִ��!

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