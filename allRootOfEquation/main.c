/*
2015��12��1��11:30:53
Ŀ�ģ��� ax^2 + bx + c = 0���̵Ľ�
��ע�������ж� b^2 - 4ac �Ƿ���� 0 ʱ��Ҫע�⣺���� disc����b^2 - 4ac����ʵ������ʵ���ڼ���ʹ洢ʱ����һЩ΢С����
��˲���ֱ�ӽ��������жϣ���if (disc == 0)����������Ϊ�������ܻ���ֱ���������������������������б�Ϊ������������½������
���Բ�ȡ�İ취���б�disc�ľ���ֵ��fabs(disc)���Ƿ�С��һ����С����������10��-6�η��������С�ڴ���������Ϊdisc����0��
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
�����
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
