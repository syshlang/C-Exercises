//
// Created by sunys on 2023/11/2.
//
/**
 * ��break����continue���ʵ��100���ڵ���������Ϊ15�������������
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
    printf("100���ڵ���������Ϊ15�����������Ϊ��%d\n",max);
}
