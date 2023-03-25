// 写一个函数求两个整数的较大值
// 如：
// 输入：10 20
// 输出较大值：20

#include <stdio.h>

MAX(int x , int y ){
    int z;
    if(x>=y){
    z = x;
    }
    else{
    z = y;
    }
    return z;
}
int main()
{
    int a,b,max;
    scanf("%d &d",&a,&b);
    max = MAX(a,b);
    printf("%d\n",max);
    return 0;
}