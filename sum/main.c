/*
2015年12月12日19:04:03
目的：求k 1~100的和加上k^2 1~50求和 加上 1/k 1~10
*/

# include <stdio.h>

int main()
{
    float k, n1 = 0, n2 = 0, n3 = 0;
    for(k=1; k<=100; k++)
    {
        n1 += k;
        if (k <= 50)
            n2 += k * k;
        if (k <= 10)
            n3 += 1/k;
    }
    printf("sum=%f\n", n1+n2+n3);
    return 0;
}
/*
输出：
sum=47977.928968

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/

