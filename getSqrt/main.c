/*
2015��12��4��21:00:11
Ŀ�ģ���С��1000��������ƽ����
*/

# include <stdio.h>
# include <math.h>
# define M 1000

int main()
{
    int n, k;
    printf("������һ��С��%d������\n", M);
    scanf("%d", &n);
    while (n > M || n <= 0)
    {
        printf("�������ݲ�����Ҫ������������һ��С��%d������\n", M);
        scanf("%d", &n);
    }
    k = sqrt(n);
    printf("%d��ƽ����������������%d\n", n, k);
    return 0;
}
/*
�����
������һ��С��1000������
1230
�������ݲ�����Ҫ������������һ��С��1000������
130
130��ƽ����������������11

Process returned 0 (0x0)   execution time : 46.782 s
Press any key to continue.
*/
