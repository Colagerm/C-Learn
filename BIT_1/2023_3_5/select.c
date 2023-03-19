// 选择语句


#include <stdio.h>
int main()
{
    int coding = 0;
    printf("你会去卖卡吗?(选择1 or 0):>");
    scanf("%d", &coding);
    if(coding == 1)
   {
       printf("坚持,你会有好多money\n");
   }
    else
   {
       printf("放弃，回家耕田\n");
   }
    return 0;
}
