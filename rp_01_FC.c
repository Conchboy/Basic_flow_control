//
// Created by C2243829 on 2021/2/15.
//
# include <stdio.h>
int main()
{
    int sum = 0;

    for (int j = 3; j < 100; ++j)
    {
        if ( j%3 == 0)
        {
            sum += j;

        }

    }
    printf("%d", sum);
    return 0;
}