// 描述
// BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。BoBo出了一个问题给KiKi，转换以下ASCII码为对应字符并输出他们。

// 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33

// 输入描述：
// 无
// 输出描述：
// 一行输出转换题目中给出的所有ASCII码对应的字符，无需以空格隔开。

#include <stdio.h>

int main() {
    int arr[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};
    int i = 0;
    int sf = sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i < sf;i++) {
        printf("%c", arr[i]);
    }

    return 0;
}
