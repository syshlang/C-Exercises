/**
 * .有一个函数: 写一程序，输入x，输出y的值.
 *
 * 分别用(1) if语句 (2) switch语句
 *       x     (x<1)
 * y =   2x-1  (x<=1<10)
 *      3x-11 (x>=10)
 */
#include <stdio.h>
void main(int argc, char const *argv[])
{
    float x, y;
    int flag;//设置一个标识符，用于区分三种情况
    printf("输入x的值：\n"); 
    scanf("%f", &x);

    // (1) if语句
    if (x < 1)
    { 
        y = x;
    }
    else if (x >= 1 && x < 10)
    {
        y = 2 * x - 1;
    }
    else
    {
        y = 3 * x - 11;
    }
    printf("if语句输出：y=%f\n", y); 

    // (2) switch语句

    flag = (x < 1) ? 1 : (x >= 1 && x < 10) ? 2 : 3;
    switch (flag)
    {
    case 1:
        y = x;
        break;
    case 2:
        y = 2 * x - 1;
        break;
    default:
        y = 3 * x - 11;
        break;
    } 
    printf("switch语句输出：y=%f\n", y); 
}
