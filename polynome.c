/*
2015年11月27日22:57:31
目的：求多项式：1-1/2+1/3-1/4+……
*/

# include <stdio.h>

int main()
{
    int n, sign = 1;
    double deno = 1.0, sum = 0, term = 0;
    scanf("%d", &n);

   while (deno <= n)
    {
        term = sign/deno;
        sum += term;
        sign = -sign;
        deno++;
    }

    printf("sum=%f\n", sum);

    return 0;
}

/*
输出：
100
sum=0.688172

Process returned 0 (0x0)   execution time : 4.022 s
Press any key to continue.

*/
