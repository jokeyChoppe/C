/*
2015��11��27��08:21:15
Ŀ�ģ��ҵ�3�����е������
*/

# include <stdio.h>

int main()
{
    int findMax(int a, int b, int c);
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("max = %d", findMax(a, b, c));

    return 0;
}

int findMax(int a, int b, int c)
{
    int max = a;
    if (max < b) max = b;
    else if (max < c) max = c;
}

/*
�����
7 3 9
max = 9
Process returned 0 (0x0)   execution time : 5.966 s
Press any key to continue.
*/
