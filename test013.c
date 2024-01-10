#include <stdio.h>
#include <string.h>

int countChar = 0, countNumber = 0, countBlank = 0, countOther = 0;

void Count(const char str[])
{
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            countChar++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            countNumber++;
        }
        else if (str[i] == ' ')
        {
            countBlank++;
        }
        else
        {
            countOther++;
        }
    }
}

void main()
{
    char temp[100];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("请输第%d个字符串：", i + 1);
        gets(temp);
        Count(temp);
    }
    printf("字母：%d  数字：%d  空格：%d  其他：%d\n", countChar, countNumber, countBlank, countOther);
}