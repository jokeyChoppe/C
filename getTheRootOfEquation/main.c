/*
2015年11月30日21:38:13
目的：使用if语句判断方程是否有实根
*/

# include <stdio.h>
# include <math.h>

int main()
{
    double a, b, c, disc, x1, x2, p, q;
    scanf("%lf%lf%lf", &a, &b, &c);
    disc = pow(b, 2) - 4 * a * c;
    if (disc < 0)
        printf("This equation hasn't real roots\n");
    else
    {
        p = -b / (2.0 * a);
        q = sqrt(disc) / (2.0 * a);
        x1 = p + q;
        x2 = p - q;
        printf("real roots:\nx1=%10.6f\nx2=%10.6f\n", x1, x2);
    }

    return 0;
}

/*
输出：运行2次

6 3 1
This equation hasn't real roots

Process returned 0 (0x0)   execution time : 8.750 s
Press any key to continue.

2 4 1
real roots:
x1= -0.292893
x2= -1.707107

Process returned 0 (0x0)   execution time : 10.610 s
Press any key to continue.
*/
