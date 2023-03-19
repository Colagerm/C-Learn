// 描述
// 从键盘输入5个人的身高（米），求他们的平均身高（米）。

// 输入描述：
// 一行，连续输入5个身高（范围0.00~2.00），用空格分隔。
// 输出描述：
// 一行，输出平均身高，保留两位小数。

#include <stdio.h>

int main() {
    float a, b, c, d, e;
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e ) ;
    float eve,sum;
    sum = a + b + c + d + e;
    eve = sum / 5.00;

    printf("%.2f\n", eve);

    return 0;
}