// 这种由双引号（Double Quote）引起来的一串字符称为字符串字面值（String Literal），或者简称字符
// 串。

// "hello"

// %d 打印整形
// %s 打印字符串

// 字符串的结束标志是一个 \0 的转义字符。在计算字符串长度的时候 \0 是结束标志，不算作字符串
// 内容。

// #include <stdio.h>
// //下面代码，打印结果是什么？为什么？（突出'\0'的重要性）
// int main()
// {
//     char arr1[] = "bit";
//     char arr2[] = {'b', 'i', 't'};
//     char arr3[] = {'b', 'i', 't', '\0'};
//     printf("%s\n", arr1);
//     printf("%s\n", arr2);
//     printf("%s\n", arr3);
//     return 0;
// }

//程序输出什么？
#include <stdio.h>
#include <string.h>
int main()
{
    printf("%d\n", strlen("abcdef"));
    // \62被解析成一个转义字符
    printf("%d\n", strlen("c:\test\628\test.c"));
        printf("%d\n", strlen("c:\test\121"));
    return 0;
}

