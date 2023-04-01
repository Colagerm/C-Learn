// 描述
// 输入10个整数，分别统计输出正数、负数的个数。
// 输入描述：
// 输入10个整数（范围-231~231-1），用空格分隔。
// 输出描述：
// 两行，第一行正数个数，第二行负数个数，具体格式见样例。

#include <stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    int x = 0, y = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if (n > 0)
        {
            x++;
        }
        if (n < 0)
        {
            y++;
        }
    }
    printf("positive:%d\n", x);
    printf("negative:%d\n", y);
    return 0;
}
