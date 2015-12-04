/*
2015年12月4日22:32:41
目的：逆序输出一个数
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
输出：
98423
32489

Process returned 0 (0x0)   execution time : 50.657 s
Press any key to continue.
*/
