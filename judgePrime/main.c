/*
2015��12��3��21:19:42
Ŀ�ģ�����һ������3�������ж��Ƿ�Ϊ����
*/

# include <stdio.h>
# include <math.h>

int main()
{
    int n, i, k;
    printf("please enter a integer number: n=");
    scanf("%d", &n);
    k = sqrt(n);
    for (i=2; i<=k; i++)
        if (n % i == 0)
            break;
    if (i <= k)
        printf("%d is not a prime number.\n", n);
    else
        printf("%d is a prime number.\n", n);

    return 0;
}

/*
�����
please enter a integer number: n=381
381 is not a prime number.

Process returned 0 (0x0)   execution time : 3.859 s
Press any key to continue.
*/
