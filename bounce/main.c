/*
2015��12��13��10:23:20
Ŀ�ģ�����С���10����ؾ�����·�̺͵�10�η����ĸ߶�
*/

# include <stdio.h>

int main()
{
    int i;
    float fallDown = 100, sum = 100;
    for (i=1; i<=10; i++)
    {
        sum += fallDown;
        fallDown /= 2;
    }

    printf("��10�η����߶ȣ�%f�����ʱ������·�̣�%f", sum, fallDown);


/*    double sn = 100, hn = sn / 2;
    int n;
    for (n=2; n<=10; n++)
    {
        sn = sn + hn * 2;
        hn = hn / 2;
    }
    printf("��10�����ʱ����%f��\n", sn);
    printf("��10�η���%f��\n", hn);*/

    return 0;
}

/*
�����
��10�η����߶ȣ�299.804688�����ʱ������·�̣�0.097656
Process returned 0 (0x0)   execution time : 0.077 s
Press any key to continue.
��ע�� ���ϵıȽϺ����
*/
