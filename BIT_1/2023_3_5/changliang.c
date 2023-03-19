// C语言中的常量和变量的定义的形式有所差异。

// C语言中的常量分为以下以下几种：

// 字面常量
// const 修饰的常变量
// #define 定义的标识符常量
// 枚举常量

#include <stdio.h>
// 举例
enum level
{
    LOW,
    MIDDLE,
    TALL
};
//上面的LOW,MIDDLE,TALL都是枚举常量
int main()
{
    //字面常量
    18888;
    3.14;

     //const 修饰的常变量
    const int opp = 100;
    opp = 200;//错误的不可修改

    //#define的标识符常量
    #define MAX 1000
    printf("%d\n" , MAX);

    // 枚举常量演示
    printf("%d\n" , LOW);
    printf("%d\n" , MIDDLE);
    printf("%d\n" , TALL);
    // 枚举常量的默认是从0开始，依次向下递增1的

    return 0;
}

// 上面例子上的 pai 被称为 const 修饰的常变量， 
// const 修饰的常变量在C语言中只是在语法层面限制了变量 pai 不能直接被改变，
// 但是 pai 本质上还是一个变量的，所以叫常变量。
