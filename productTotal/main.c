/*
2015��11��29��21:55:01
Ŀ�ģ�����10����ҹ�����������ֵ
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
    printf("10����ҹ�����������ֵ��%lf\n", p);
    return 0;
}

/*
�����
10����ҹ�����������ֵ��2.367364

Process returned 0 (0x0)   execution time : 0.085 s
Press any key to continue.
*/
