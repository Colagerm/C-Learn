// 描述
// 输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
// 输入描述：
// 两行，第一行为n，表示n个成绩，不会大于10000。

// 第二行为n个成绩（整数表示，范围0~100），以空格隔开。
// 输出描述：
// 一行，输出n个成绩中最高分数和最低分数的差。
#include <stdio.h>
int main()
{
    int n = 0, score = 0, min = 100, max = 0, i = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &score);
        if (max < score)
        {
            max = score;
        }
        if (min > score)
        {
            min = score;
        }
    }
    printf("%d\n", max - min);
    return 0;
}

// 示例1
// 输入：
// 10
// 98 100 99 97 95 99 98 97 96 100
// 输出：
// 5
