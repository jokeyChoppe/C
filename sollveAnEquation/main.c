/*
2015��11��29��12:24:18
Ŀ�ģ����뷽��ϵ����ⷽ��
*/

# include <stdio.h>
# include <math.h>

int main()
{
    double a, b, c, disc, x1, x2, p, q;
    freopen("./solveAnEquation.txt", "r", stdin);
    scanf("%lf %lf %lf", &a, &b, &c);
    disc = b * b - 4 * a * c;
    if (disc < 0)
        printf("�˷����޽�");
    else
    {
        p = - b / (2.0 * a);
        q = sqrt(disc) / (2.0 * a);
        x1 = p + q;
        x2 = p - q;
        printf("x1=%7.2f\nx2=%7.2f\n", x1, x2);
    }

    return 0;
}

/*
�����
x1=  -1.00
x2=  -2.00

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
