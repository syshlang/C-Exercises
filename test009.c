/**
 *
 */
#include "stdio.h"
void main()
{
    char ch;
    printf("������һ���ַ�:\n");
    scanf("%c", &ch);
    // if (ch >= 65 && ch <= 90)
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("����ַ��Ǵ�д��ĸ,��Ӧ��СдΪ��%c\n", ch + 32);
    }
    // else if (ch >= 97 && ch <= 122)
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("����ַ���Сд��ĸ,��Ӧ�Ĵ�дΪ��%c\n", ch - 32);
    }
    else
    {
        printf("error");
    }
}