/*
2015��11��30��10:43:57
Ŀ�ģ��������д��
��ע��float������Чֻ��6λ��double��Чλ15������С��
*/

# include <stdio.h>
# include <math.h>

int main()
{
    int years;
    float p, r1, r2, r3, r5, r0;
    freopen("./bankSaving.txt", "r", stdin);
    scanf("%f%d%f%f%f%f%f", &p, &years, &r1, &r2, &r3, &r5, &r0);
    printf("����һ�ı�Ϣ��Ϊ%6.2f\n", p * (1 + years * r5 / 100));
    printf("�������ı�Ϣ��Ϊ%6.2f\n", p * (1 + 2 * r2 / 100)*(1 + 3 * r3 / 100));
    printf("�������ı�Ϣ��Ϊ%6.2f\n",  p * (1 + 3 * r3 / 100)*(1 + 2 * r2 / 100));
    printf("�����ĵı�Ϣ��Ϊ%6.2f\n", p * pow(1+r1/100, 5));
    printf("������ı�Ϣ��Ϊ%6.2f\n", p * pow(1+r0/4/100, 4*years));

    return 0;
}

/*
�����
����һ�ı�Ϣ��Ϊ1292.50
�������ı�Ϣ��Ϊ1270.76
�������ı�Ϣ��Ϊ1270.76
�����ĵı�Ϣ��Ϊ1224.86
������ı�Ϣ��Ϊ1036.62

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
