/*
2015年12月4日21:45:33
目的：
*/

# include <stdio.h>

int main()
{
    double x;
    scanf("%lf", &x);
    if (x >= 10)
        printf("x=%lf y = 3 * x - 11 = %f", x, 3 * x - 11);
    else if (x >= 1)
        printf("x=%lf y = 2 * x - 1 = %f", x, 2 * x - 1);
    else
        printf("x=%lf y = x = %f", x, x);
    return 0;
}

/*
输出：
4
x=4.000000 y = 2 * x - 1 = 7.000000
Process returned 0 (0x0)   execution time : 68.017 s
Press any key to continue.
*/
