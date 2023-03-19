// 数据类型
// char        //字符数据类型
// short       //短整型
// int         //整形
// long        //长整型
// long long   //更长的整形
// float       //单精度浮点数
// double      //双精度浮点数
//C语言没有字符串类型


#include <stdio.h>
int main()
{

    // 为什么出现这么的类型？
    // 因为需要合理利用空间,注意：存在这么多的类型，其实是为了更加丰富的表达生活中的各种值。

    // 每种类型的大小是多少？
    //运行下列就可知
    printf("%d\n" , sizeof(char));
    printf("%d\n" , sizeof(short));
    printf("%d\n" , sizeof(int));
    printf("%d\n" , sizeof(long));
    printf("%d\n" , sizeof(long long));
    printf("%d\n" , sizeof(float));
    printf("%d\n" , sizeof(double));


    //运行后的数据单位是字节


    // 类型的使用
    char ch = 'w';
    int weight = 120;
    int salary = 20000;
    float hey = 12.9;
    
    
    return 0;
}