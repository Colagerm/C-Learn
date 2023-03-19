//代码2
#include <stdio.h>
int main()
{ 
    int n=10;
    int i=1;
    int base=1;
    int add;
    // scanf("%d",&n);
    while (i<=n)
    {
        base*=i;// 相当于base=base*i
        i++;
        add+=base;
    }
    printf("%d\n",base);
    printf("%d\n",add);
    return 0;
}
