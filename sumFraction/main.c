/*
2015��12��13��00:07:12
Ŀ�ģ���2/1 + 3/2 + 5/3 +����ǰ20��
*/

# include <stdio.h>

int main()
{
    double i, f1 = 1, f2 = 1, f3, sum = 0;
    for (i=1; i<=20; i++)
    {
        f3 = f1 + f2;
        sum += f3 / f2;
        f1 = f2;
        f2 = f3;
    }
    printf("sum=%f", sum);
    return 0;
}

/*
�����
sum=32.660261
Process returned 0 (0x0)   execution time : 0.031 s
Press any key to continue.
*/
