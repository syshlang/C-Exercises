/**
 *
 */
#include "stdio.h"
void main()
{
    char ch;
    printf("请输入一个字符:\n");
    scanf("%c", &ch);
    // if (ch >= 65 && ch <= 90)
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("这个字符是大写字母,对应的小写为：%c\n", ch + 32);
    }
    // else if (ch >= 97 && ch <= 122)
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("这个字符是小写字母,对应的大写为：%c\n", ch - 32);
    }
    else
    {
        printf("error");
    }
}