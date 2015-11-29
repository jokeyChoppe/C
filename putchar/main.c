/*
2015年11月29日21:22:47
目的：使用putchar输出字符
备注：putchar(c) 中的 c 可以是字符常量、整型常量、字符变量或整型变量（其值在字符的 ASCII 代码范围内）
*/

# include <stdio.h>

int main()
{
    int a = 66, b = 79, c = 89;
    putchar(a);
    putchar(b);
    putchar(c);
    putchar('\n');
    return 0;
}

/*
输出：
BOY

Process returned 0 (0x0)   execution time : 0.156 s
Press any key to continue.
*/
