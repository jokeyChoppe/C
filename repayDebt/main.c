/*
2015��11��30��15:33:31
Ŀ�ģ������д���
*/

# include <stdio.h>
# include <math.h>

int main()
{
    float debt, p, r, months;
    freopen("./repayDebt.txt", "r", stdin);
    scanf("%f%f%f", &debt, &p, &r);
    months = log10(p / (p - debt * r/100)) / log10(1 + r/100);
    printf("��Ҫ��%6.1f����\n", months);

    return 0;
}

/*
�����
��Ҫ��  69.7����

Process returned 0 (0x0)   execution time : 0.094 s
Press any key to continue.
*/
