/*
2015年11月29日21:55:01
目的：计算10年后我国国民生产总值
*/
# include <stdio.h>
# include <math.h>

int main()
{
    double p = 1.0, r;
    int n;
    freopen("./productTotal.txt", "r", stdin);
    scanf("%lf %d", &r, &n);

    p = pow(1+r/100, n );
    printf("10年后我国国名生产总值：%lf\n", p);
    return 0;
}

/*
输出：
10年后我国国名生产总值：2.367364

Process returned 0 (0x0)   execution time : 0.085 s
Press any key to continue.
*/
