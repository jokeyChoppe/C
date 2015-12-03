/*
2015年12月3日23:15:32
目的：使用公式求圆周率的值
*/

# include <stdio.h>
# include <math.h>

int main()
{
    int sign = 1;
    double pi = 0, term = 1, n = 1;

    while (fabs(term) >= 1e-6)
    {
        pi += term;
        sign = - sign;
        n = n + 2;
        term = sign / n;
    }
    pi = pi * 4;
    printf("%10lf\n", pi);

    return 0;
}

/*
输出：
  3.141591

Process returned 0 (0x0)   execution time : 0.143 s
Press any key to continue.
*/
