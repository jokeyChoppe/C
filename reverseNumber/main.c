/*
2015��12��4��22:32:41
Ŀ�ģ��������һ����
*/

# include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (; n > 0; n/=10)
    {
        printf("%d", n % 10);
    }
    printf("\n");
    return 0;
}

/*
�����
98423
32489

Process returned 0 (0x0)   execution time : 50.657 s
Press any key to continue.
*/
