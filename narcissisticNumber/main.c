/*
2015年12月12日21:12:41
目的：求水仙花数
*/

# include <stdio.h>

int main()
{
    /*int n0, sum = 0, i, j, temp;
    printf("水仙花数：");
    for (i=100; i<=999; i++)
    {
        sum = 0;
        temp = i;
        for (j=1; j<=3; j++)
        {
            n0 = temp % 10;
            temp /= 10;
            sum += n0 * n0 * n0;
        }
        if (sum == i)
            printf("%d ", i);
    }*/
    int i, j, k, n;
    for (n=100; n<1000; n++)
    {
        i = n / 100;
        j = n / 10 - i * 10;
        k = n % 10;
        if (n == i * i * i + j * j * j + k * k * k)
            printf("%d ", n);
    }
    return 0;
}
/*
输出：
水仙花数：153 370 371 407
Process returned 0 (0x0)   execution time : 0.335 s
Press any key to continue.

153 370 371 407
Process returned 0 (0x0)   execution time : 0.033 s
Press any key to continue.
备注：书上的方法比较快也比较简单直接
*/
