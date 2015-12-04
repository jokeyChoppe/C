/*
2015年12月4日21:00:11
目的：求小于1000的正数的平方根
*/

# include <stdio.h>
# include <math.h>
# define M 1000

int main()
{
    int n, k;
    printf("请输入一个小于%d的整数\n", M);
    scanf("%d", &n);
    while (n > M || n <= 0)
    {
        printf("输入数据不符合要求，请重新输入一个小于%d的整数\n", M);
        scanf("%d", &n);
    }
    k = sqrt(n);
    printf("%d的平方根的整数部分是%d\n", n, k);
    return 0;
}
/*
输出：
请输入一个小于1000的整数
1230
输入数据不符合要求，请重新输入一个小于1000的整数
130
130的平方根的整数部分是11

Process returned 0 (0x0)   execution time : 46.782 s
Press any key to continue.
*/
