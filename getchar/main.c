/*
2015年11月29日21:30:41
目的：使用getchar输入字符
备注：getchar函数可以获取空格字符或回车字符，所以在输入字符时要连续输入，不能用空格或回车隔开
*/

# include <stdio.h>

int main()
{
    char a, b, c;
    a = getchar();
    b = getchar();
    c = getchar();
    putchar(a);
    putchar(b);
    putchar(c);
    putchar('\n');
    return 0;
}

/*
输出：
boy
boy

Process returned 0 (0x0)   execution time : 8.813 s
Press any key to continue.

备注：第一行是输入，字符间无间断输入
*/
