/*
2015年12月4日20:45:49
目的：有3个整数a, b, c，由键盘输入，输出其中最小的数
*/
# include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("min=%d\n", a < b ? (a < c ? a : c) : (b < c ? b : c));
    return 0;
}

/*
输出：
12 34 9
min=9

Process returned 0 (0x0)   execution time : 12.719 s
Press any key to continue.
*/
