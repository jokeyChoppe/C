/*
2015��11��29��10:44:44
Ŀ�ģ��������ε����
��ע��ʹ����ѧ����ʱʹ�� # include <math.h> ʹ�ö�̬�����ڴ溯����mallocʱ ʹ�� # include <stdlib.h>
*/

# include <stdio.h>
# include <math.h>

int main()
{
    double a, b, c, s, area;
    a = 3.67;
    b = 5.43;
    c = 6.21;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("a=%f\tb=%f\tc=%f\t\n", a, b, c);
    printf("area=%f\n", area);

    return 0;
}

/*
�����
a=3.670000      b=5.430000      c=6.210000
area=9.903431

Process returned 0 (0x0)   execution time : 0.078 s
Press any key to continue.
*/
