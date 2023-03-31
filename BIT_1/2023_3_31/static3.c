//代码1
//add.c
int Add(int x, int y)
{
    return c+y;
}

//test.c
int main()
{
    printf("%d\n", Add(2, 3));
    return 0;
}

//代码2
//add.c
static int Add(int x, int y)
{
    return c+y;
}
//test.c
int main()
{
    printf("%d\n", Add(2, 3));
    return 0;
}
