// 描述
// 小乐乐获得4个最大数，请帮他编程找到最大的数。
// 输入描述：
// 一行，4个整数，用空格分开。
// 输出描述：
// 一行，一个整数，为输入的4个整数中最大的整数。
#include <stdio.h>
int main() {
    int a, b, c, d, x, y;
    while (scanf("%d %d %d %d", &a, &b, &c,
                 &d) != EOF) {
        x = a > b ? a : b;
        y = c > d ? c : d;
        printf("%d\n", x > y ? x : y);
    }
    return 0;
}