/*
2015年12月10日23:04:06
目的：求式子s = a + aa + aaa + aaa + ……
*/

# include <stdio.h>

int main()
{
    int a, n, sum = 0, temp;
    scanf("%d %d", &a, &n);
    temp = a;
    while (n-- > 0)
    {
        sum += temp;
        temp = temp * 10 + a;
    }
    printf("sum=%d", sum);
    return 0;
}

/*
输出：
2 5
sum=24690
Process returned 0 (0x0)   execution time : 3.641 s
Press any key to continue.
*/
