/*
2015年12月1日11:30:53
目的：求 ax^2 + bx + c = 0方程的解
备注：对于判断 b^2 - 4ac 是否等于 0 时，要注意：由于 disc（即b^2 - 4ac）是实数，而实数在计算和存储时会有一些微小的误差，
因此不能直接进行如下判断：“if (disc == 0)……”，因为这样可能会出现本来是零的量，由于上述误差而被判别为不等于零而导致结果错误。
所以采取的办法是判别disc的绝对值（fabs(disc)）是否小于一个很小的数（例如10的-6次方），如果小于次数，就认为disc等于0。
*/

# include <stdio.h>
# include <math.h>

int main()
{
    double a, b, c, disc, x1, x2, realpart, imagpart;
    scanf("%lf%lf%lf", &a, &b, &c);
    printf("The equation ");
    if (fabs(a) <= 1e-6)
        printf("is not a quadratic\n");
    else
    {
        disc = pow(b, 2) - 4 * a * c;
        if (fabs(disc) <= 1e-6)
            printf("has two equal roots :%8.4f\n", -b / (2 * a));
        else
            if (disc > 1e-6)
        {
            x1 = (- b + sqrt(disc)) / (2 * a);
            x2 = (- b - sqrt(disc)) / (2 * a);
            printf("has distinct real roots: %8.4f and %8.4f\n", x1, x2);
        }
        else
        {
            realpart = - b / (2 * a);
            imagpart = sqrt(- disc) / (2 * a);
            printf("has complex roots:\n");
            printf("%8.4f+%8.4fi\n", realpart, imagpart);
            printf("%8.4f-%8.4fi\n", realpart, imagpart);

        }
    }
    return 0;
}

/*
输出：
1 2 1
The equation has two equal roots : -1.0000

Process returned 0 (0x0)   execution time : 12.422 s
Press any key to continue.

2 6 1
The equation has distinct real roots:  -0.1771 and  -2.8229

Process returned 0 (0x0)   execution time : 13.594 s
Press any key to continue.

1 2 2
The equation has complex roots:
 -1.0000+  1.0000i
 -1.0000-  1.0000i

Process returned 0 (0x0)   execution time : 5.406 s
Press any key to continue.
*/
