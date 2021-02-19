//
// Created by C2243829 on 2021/2/19.
//
# include <stdio.h>

int main() {
  int a = 1, b;
   for (b =1; b <= 10; b++)
   {
       if (a >= 8)
           break;   //会跳到printf
       if (1 == a%2)
       {
           a += 5;
           continue;
       }
       a -= 3;
   }
   printf("b = %d\n", b); //b = 4 执行了b++后 a = 8 执行break, 跳出循环
    return 0;
}
