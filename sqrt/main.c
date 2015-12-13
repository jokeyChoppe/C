/*
2015年12月13日14:19:10
目的：用迭代法求 a 的平方根
*/

# include <stdio.h>
# include <math.h>

int main()
{
    double a, x, xn;
    scanf("%lf", &a);
    while (a <=0)
    {
        printf("请重新输入一个大于0的数：");
        scanf("%lf", &a);
    }
    x = a / 2;
    xn = (x + a / x) / 2;
    while (fabs(xn - x) >= 1e-5)
    {
        x = xn;
        xn = (x + a / x) / 2;
    }
    printf("a的平方根为：%lf", xn);
    return 0;
}

/*
输出：
2
a的平方根为：1.414214
Process returned 0 (0x0)   execution time : 3.382 s
Press any key to continue.
*/
