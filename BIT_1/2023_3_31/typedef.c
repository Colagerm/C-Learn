#include <stdio.h>
//将unsigned int 重命名为uint123, 所以uint123也是一个类型名
typedef unsigned int uint123;
int main(){
    unsigned int num1 = 0 ;
    uint123 num2 = 0 ;
    //观察num1和num2,这两个变量的类型是一样的
    return 0;
}