// 有些事必须一直做，比如我日复一日的讲课，比如大家，日复一日的学习。

//while循环的实例
#include <stdio.h>
int main()
{
    printf("加入可乐流量卡\n");
    int card = 0;
    while(card<=20000)
   {
        card++;
        printf("我要继续努力出卡\n");
   }
    if(card>20000)
        printf("好多money\n");
    return 0;
}