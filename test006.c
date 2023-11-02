#include <stdio.h>

int main() {
    int ch1;
    char ch2;

    printf("请输入第一个字符: ");
    ch1 = getchar();  // 使用getchar函数获取一个字符
    getchar(); // 用于消耗输入缓冲区中的换行符

    printf("请输入第二个字符: ");
    scanf(" %c", &ch2);

    // 使用putchar函数输出字符
    printf("使用putchar输出第一个字符: ");
    putchar(ch1);
    putchar('\n');

    printf("使用putchar输出第二个字符: ");
    putchar(ch2);
    putchar('\n');

    // 使用printf函数输出字符
    printf("使用printf输出第一个字符: %c\n", ch1);
    printf("使用printf输出第二个字符: %c\n", ch2);

    return 0;
}
