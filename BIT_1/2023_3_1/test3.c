// 描述
// 据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。
// 输入描述：
// 多组输入，每行输入包括一个整数表示的智商。
// 输出描述：
// // 针对每行输入，输出“Genius”。

#include <stdio.h>

int main() {
    int intelligence = 0;
    scanf("%d", &intelligence);
    if (intelligence >= 140) {
        printf("Genius");

    } else {

    }
    return 0;
}