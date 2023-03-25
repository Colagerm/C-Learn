// 描述
// 已知一个函数y=f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。   

// 输入描述：
// 一行，输入一个整数x。（-10000<x<10000）
// 输出描述：
// 一行，输出y的值。

#include <stdio.h>

int main() {
    int x = 0;
    int y = 0;
    scanf("%d", &x);
    if (x < 0) {
        y = 1;
        printf("%d", y);
    }
    else if (x == 0) {
        y = 0;
        printf("%d", y);
    }
    else {
        y = -1;
        printf("%d", y);
    }
return 0;
}