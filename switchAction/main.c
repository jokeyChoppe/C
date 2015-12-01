/*
2015年12月1日11:00:58
目的：用switch语句处理菜单命令
*/

# include <stdio.h>

int main()
{
    void add(int x, int y), multiply(int x, int y);
    char ch;
    int a = 15, b = 23;
    ch = getchar();
    switch(ch)
    {
        case 'a':
        case 'A': add(a, b); break;
        case 'b':
        case 'B': multiply(a, b); break;
        default: putchar('\a');
    }
    return 0;
}

void add(int x, int y)
{
    printf("x+y=%d\n", x + y);
    return;
}

void multiply(int x, int y)
{
    printf("x*y=%d\n", x * y);
    return;
}

/*
输出：
a
x+y=38

Process returned 0 (0x0)   execution time : 14.219 s
Press any key to continue.
*/
