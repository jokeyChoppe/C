/*
2015年11月26日22:15:13
目的：调用函数，找到两者中最大值
*/

# include <stdio.h>

int main()
{
    int getMax(int a, int b);
    int a, b, c;

    scanf("%d %d", &a, &b);
    c = getMax(a, b);
    printf("max = %d", c);

    return 0;
}

int getMax(int a, int b)
{
    return a > b ? a : b;
}

/*
输出：
8 5
max = 8
Process returned 0 (0x0)   execution time : 11.305 s
Press any key to continue.
*/
