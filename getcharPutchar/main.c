/*
2015年11月29日21:30:41
目的：使用getchar输入字符,putchar输出字符
备注：getchar函数可以获取空格字符或回车字符，所以在输入字符时要连续输入，不能用空格或回车隔开
getchar函数获取的字符可以不存储在变量中，直接当表达式使用
*/

# include <stdio.h>

int main()
{
    putchar(getchar());
    putchar(getchar());
    putchar(getchar());
    putchar('\n');
    return 0;
}

/*
BOY
BOY

Process returned 0 (0x0)   execution time : 7.219 s
Press any key to continue.

备注：第一行是输入，字符间无间断输入
*/
