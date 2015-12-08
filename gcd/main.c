/*
2015年12月5日07:11:26
目的：求两个数的最大公约数
*/

# include <stdio.h>

int main()
{
    int m, n, r, p;
    scanf("%d%d", &m, &n);
    p = m * n;
    while(n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    printf("它们的最大公约数为：%d\n", m);
    printf("它们的最小公倍数为：%d\n", p / m);

    return 0;
}

/*
输出：
35 49
它们的最大公约数为：7
它们的最小公倍数为：245

Process returned 0 (0x0)   execution time : 6.694 s
Press any key to continue.
*/
