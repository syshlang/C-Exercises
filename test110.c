/**
 * .��һ������: дһ��������x�����y��ֵ.
 *
 * �ֱ���(1) if��� (2) switch���
 *       x     (x<1)
 * y =   2x-1  (x<=1<10)
 *      3x-11 (x>=10)
 */
#include <stdio.h>
void main(int argc, char const *argv[])
{
    float x, y;
    int flag;//����һ����ʶ�������������������
    printf("����x��ֵ��\n"); 
    scanf("%f", &x);

    // (1) if���
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
    printf("if��������y=%f\n", y); 

    // (2) switch���

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
    printf("switch��������y=%f\n", y); 
}
