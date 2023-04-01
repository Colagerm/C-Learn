// 结构体是C语言中特别重要的知识点，结构体使得C语言有能力描述复杂类型。
// 比如描述学生，学生包含： 名字+年龄+性别+学号 这几项信息。
// 这里只能使用结构体来描述了。
// 例如：
#include <stdio.h>
struct Stu
{
    char name[20]; //名字
    int age;       //年龄
    char sex[5];   //性别
    char id[15];   //学号
};
int main()
{
    // 结构体的初始化：
    //打印结构体信息
    struct Stu s = {"张三", 20, "男", "20180101"};
    //.为结构成员访问操作符
    printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
    //使用指针 ->操作符
    struct Stu *ps = &s;
    printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);
}