/*
2015��11��26��22:15:13
Ŀ�ģ����ú������ҵ����������ֵ
*/

# include <stdio.h>

int main()
{
    int getMax(int a, int b);
    int a, b, c;

    scanf("%d %d", &a, &b);
    c = getMax(a, b);
    printf("max = %d", c);

    return 0;
}

int getMax(int a, int b)
{
    return a > b ? a : b;
}

/*
�����
8 5
max = 8
Process returned 0 (0x0)   execution time : 11.305 s
Press any key to continue.
*/
