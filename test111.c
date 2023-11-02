//
// Created by sunys on 2023/11/2.
//
/**
 * 用break语句和continue语句实现100以内的正整数中为15倍数的最大数。
*/
#include <stdio.h>
void main(int argc, char const *argv[])
{
    int num=0,max = 1;
    while (1)
    {
        num++;
        if (num > 100)
        {
            break;
        }
        if (num % 15 != 0)
        {
            continue;
        }
        if (num > max)
        {
            max = num;
        }
    }
    printf("100以内的正整数中为15倍数的最大数为：%d\n",max);
}
