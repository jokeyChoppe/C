/*
2015��12��5��07:11:26
Ŀ�ģ��������������Լ��
*/

# include <stdio.h>

int main()
{
    int m, n, r, p;
    scanf("%d%d", &m, &n);
    p = m * n;
    while(n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    printf("���ǵ����Լ��Ϊ��%d\n", m);
    printf("���ǵ���С������Ϊ��%d\n", p / m);

    return 0;
}

/*
�����
35 49
���ǵ����Լ��Ϊ��7
���ǵ���С������Ϊ��245

Process returned 0 (0x0)   execution time : 6.694 s
Press any key to continue.
*/
