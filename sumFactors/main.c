/*
2015年12月12日22:58:50
目的：输出1000以内的完数，即所有因子的和等于自己本身  6 = 1 + 2 + 3
*/

# include <stdio.h>
int main()
{
    int m, s, i;
    for (m=2; m<1000; m++)
    {
        s = 0;
        for (i=1; i<m; i++)
            if ((m % i) == 0)   s += i;
        if (s == m)
        {
            printf("%d, its factors are", m);
            for (i=1; i<m; i++)
                if (m % i == 0)     printf("%d ",i);
            printf("\n");
        }
    }
    return 0;
}

/*
输出：
6, its factors are1 2 3
28, its factors are1 2 4 7 14
496, its factors are1 2 4 8 16 31 62 124 248

Process returned 0 (0x0)   execution time : 0.130 s
Press any key to continue.
*/
