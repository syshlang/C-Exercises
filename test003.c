#include <stdio.h>

int main() {
    int num1, num2;

    // �Ӽ���������������
    printf("��������������:\n");
    scanf("%d %d", &num1, &num2);

    // ����͡��������
    int sum = num1 + num2;
    int diff = num1 - num2;
    int product = num1 * num2;
    
    // �������Ϊ��
    if (num2 != 0) {
        float quotient = (float)num1 / num2;
        
        // ������
        printf("��: %d\n", sum);
        printf("��: %d\n", diff);
        printf("��: %d\n", product);
        printf("��: %.2f\n", quotient);
    } else {
        printf("��������Ϊ�㣬���������ĵڶ���������\n");
    }

    return 0;
}
