#include <stdio.h>

int tolower1(char x)
{
    if(65<=x && x<=90){ 
        return x+32;
    }
    return x;
}

int toupper1(char x)
{
    if(97<=x && x<=122){ 
        return x-32;
    }
    return x;
}

int main() {
    char char1, char2;
    
    printf("�������һ���ַ�: ");
    scanf(" %c", &char1);
    printf("������ڶ����ַ�: ");
    scanf(" %c", &char2);

    // ����ַ��Ĵ�Сд��ʽ
    printf("��һ���ַ��Ĵ�д��ʽ: %c\n", toupper1(char1));
    printf("��һ���ַ���Сд��ʽ: %c\n", tolower1(char1));
    printf("�ڶ����ַ��Ĵ�д��ʽ: %c\n", toupper1(char2));
    printf("�ڶ����ַ���Сд��ʽ: %c\n", tolower1(char2));

    // ����ַ���ASCII��ֵ
    printf("��һ���ַ���ASCII��ֵ: %d\n", char1);
    printf("�ڶ����ַ���ASCII��ֵ: %d\n", char2);

    return 0;
}
