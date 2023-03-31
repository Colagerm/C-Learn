//代码1
//staticadd.c
// int g_val = 2018;
#include <stdio.h>
int main()
{
    printf("%d\n", g_val);
    return 0;
}
// 代码1正常，代码2在编译的时候会出现连接性错误。

// 一个全局变量被static修饰，使得这个全局变量只能在本源文件内使用，不能在其他源文件内使
// 用。