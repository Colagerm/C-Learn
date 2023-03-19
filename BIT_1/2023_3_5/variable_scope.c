// 作用域
// 作用域（scope）是程序设计概念，通常来说，一段程序代码中所用到的名字并不总是有效/可用
// 的而限定这个名字的可用性的代码范围就是这个名字的作用域。

// 1. 局部变量的作用域是变量所在的局部范围。
// 2. 全局变量的作用域是整个工程。

#include <stdio.h>
int all = 2022;//全局
int main()
{
    printf("all = %d\n" , all);//输出全局变量
    int all = 2021;//局部变量代替了全局变量
    printf("all = %d\n" , all);
    {
        int part = 2023;//局部变量
        printf("part = %d\n" , all); 
    }
    // printf("part = " , part);//错误
    return 0;
}

//全局变量的作用域是整个工程
//在工程中的文件中也可以相互调用全局变量
//但调用不同文件时需要声明（以下是声明实例）
//以上面的全局变量all为例

