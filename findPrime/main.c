/*
2015年12月3日22:37:31
目的：求100 ~ 200 间的全部素数
*/

# include <stdio.h>
# include <math.h>

int main()
{
    int n = 101, i, k, j = 0;
    for (; n <=199; n=n+2)
    {
        k = sqrt(n);
        for (i=2; i<=k; i++)
        {
            if (n % i == 0)
                break;
        }
        if (i > k)
        {
            printf("%d ", n);
            j++;
            if (j % 5 == 0)
                printf("\n");
        }
    }

    return 0;
}

/*
输出：
101 103 107 109 113
127 131 137 139 149
151 157 163 167 173
179 181 191 193 197
199
Process returned 0 (0x0)   execution time : 0.043 s
Press any key to continue.
*/
