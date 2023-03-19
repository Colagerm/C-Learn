//输出包括一行，如果M可以被5整除就输出YES，否则输出NO（结果大小写敏感）。

#include <stdio.h>

int main()
{
    int num = 0;
    int i = 0;
    scanf("%d" , &num);
    i = num % 5;
    if( i == 0)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}