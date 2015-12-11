/*
2015年12月11日23:34:00
目的：求n的阶乘
*/

# include <stdio.h>

int main()
{
    double n, i, temp = 1, sum = 0;
    scanf("%lf", &n);
    for (i=1; i<=n; i++)
    {
        temp *= i;
        sum += temp;
    }
    printf("n!=%lf\n", sum);
    return 0;
}

/*
输出：
20
n!=2561327494111820300.000000

Process returned 0 (0x0)   execution time : 3.438 s
Press any key to continue.
*/
