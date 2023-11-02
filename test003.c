#include <stdio.h>

int main() {
    int num1, num2;

    // 从键盘输入两个整数
    printf("请输入两个整数:\n");
    scanf("%d %d", &num1, &num2);

    // 计算和、差、积、商
    int sum = num1 + num2;
    int diff = num1 - num2;
    int product = num1 * num2;
    
    // 避免除数为零
    if (num2 != 0) {
        float quotient = (float)num1 / num2;
        
        // 输出结果
        printf("和: %d\n", sum);
        printf("差: %d\n", diff);
        printf("积: %d\n", product);
        printf("商: %.2f\n", quotient);
    } else {
        printf("除数不能为零，请输入非零的第二个整数。\n");
    }

    return 0;
}
