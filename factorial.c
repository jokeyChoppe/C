/*
2015��11��27��22:33:22
Ŀ�ģ���׳�
*/

# include <stdio.h>

int main()
{
    int n, i, total = 1;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        total *= i;
    }

    printf("%d! = %d\n", n, total);

    return 0;
}

/*
�����
5
5! = 120

Process returned 0 (0x0)   execution time : 14.595 s
Press any key to continue.
*/
