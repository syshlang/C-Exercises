#include <stdio.h>

int main() {
    int ch1;
    char ch2;

    printf("�������һ���ַ�: ");
    ch1 = getchar();  // ʹ��getchar������ȡһ���ַ�
    getchar(); // �����������뻺�����еĻ��з�

    printf("������ڶ����ַ�: ");
    scanf(" %c", &ch2);

    // ʹ��putchar��������ַ�
    printf("ʹ��putchar�����һ���ַ�: ");
    putchar(ch1);
    putchar('\n');

    printf("ʹ��putchar����ڶ����ַ�: ");
    putchar(ch2);
    putchar('\n');

    // ʹ��printf��������ַ�
    printf("ʹ��printf�����һ���ַ�: %c\n", ch1);
    printf("ʹ��printf����ڶ����ַ�: %c\n", ch2);

    return 0;
}
