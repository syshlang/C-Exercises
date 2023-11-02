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
    
    printf("请输入第一个字符: ");
    scanf(" %c", &char1);
    printf("请输入第二个字符: ");
    scanf(" %c", &char2);

    // 输出字符的大小写形式
    printf("第一个字符的大写形式: %c\n", toupper1(char1));
    printf("第一个字符的小写形式: %c\n", tolower1(char1));
    printf("第二个字符的大写形式: %c\n", toupper1(char2));
    printf("第二个字符的小写形式: %c\n", tolower1(char2));

    // 输出字符的ASCII码值
    printf("第一个字符的ASCII码值: %d\n", char1);
    printf("第二个字符的ASCII码值: %d\n", char2);

    return 0;
}
