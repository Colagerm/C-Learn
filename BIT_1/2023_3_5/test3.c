#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char input[10]="";
    printf("登录到用户:Admin\n");
    for(i=0;i<3;i++)
    {
        int n=2-i;
        printf("请输入密码");
        scanf("%s",input);
        if (strcmp(input,"mmmmmmmm")==0 )
        {
            printf("密码正确,正在登录到Admin");
            break;
        }
        else
        {
            printf("密码错误");
        }

    printf("(你还有%d次机会)\n",n);
    return 0;
}