// 描述
// 请计算表达式“(-8+22)×a-10+c÷2”，其中，a = 40，c = 212。

// 输入描述：
// 无。
// 输出描述：
// (-8+22)×a-10+c÷2计算之后的结果，为一个整数。

#include <stdio.h>

int main() {
    int a = 40, c = 212, resurt;
    resurt = (-8 + 22) * a - 10 + c / 2;
    printf("%d", resurt);

    return 0;
}