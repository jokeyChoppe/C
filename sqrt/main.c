/*
2015��12��13��14:19:10
Ŀ�ģ��õ������� a ��ƽ����
*/

# include <stdio.h>
# include <math.h>

int main()
{
    double a, x, xn;
    scanf("%lf", &a);
    while (a <=0)
    {
        printf("����������һ������0������");
        scanf("%lf", &a);
    }
    x = a / 2;
    xn = (x + a / x) / 2;
    while (fabs(xn - x) >= 1e-5)
    {
        x = xn;
        xn = (x + a / x) / 2;
    }
    printf("a��ƽ����Ϊ��%lf", xn);
    return 0;
}

/*
�����
2
a��ƽ����Ϊ��1.414214
Process returned 0 (0x0)   execution time : 3.382 s
Press any key to continue.
*/
