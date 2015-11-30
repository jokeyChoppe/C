/*
2015年11月30日16:53:58
目的：输入5个字符然后加密
*/

# include <stdio.h>

int main()
{
    int n = 5;
    for(; n>0; n--)
        putchar(getchar() + 4);
    return 0;
}

/*
输出：
China
Glmre
Process returned 0 (0x0)   execution time : 15.638 s
Press any key to continue.
*/
