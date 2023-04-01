// 以整形指针举例，可以推广到其他类型，如：
#include <stdio.h>
int main()
{
 char ch = 'w';
 char* pc = &ch;
 *pc = 'q';
 printf("%c\n", ch);
    return 0;
}
