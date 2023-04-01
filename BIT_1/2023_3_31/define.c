#include <stdio.h>
//define定义标识符常量
#define MIN 10
#define SAY "nihaoniubi"
//define定义宏
#define MAX(x,y) (x>y?x:y)
int main()
{
    int a = 10;
    int b = 20;
    int m = MAX(a,b);
    printf("%d\n",MIN);
    printf("%d\n",m);
    printf("%s\n",SAY);
    return 0;
}