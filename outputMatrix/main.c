/*
2015��12��2��21:40:58
Ŀ�ģ����һ������Ƚ�break��continue���÷�
*/

# include <stdio.h>

int main()
{
    int i, j, n = 0;
    for (i=1; i<=4; i++)
        for (j=1; j<=5; j++, n++)
        {
            if (n % 5 == 0)
                printf("\n");
            if (i == 3 && j == 1)
            //    break;
                continue;
            printf("%d\t", i * j);
        }
    printf("\n");

    return 0;
}

/*
�����
break���

1       2       3       4       5
2       4       6       8       10

4       8       12      16      20

Process returned 0 (0x0)   execution time : 0.031 s
Press any key to continue.

continue���

1       2       3       4       5
2       4       6       8       10
6       9       12      15
4       8       12      16      20

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.

*/
