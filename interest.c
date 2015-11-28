/*
2015年11月28日20:47:03
目的：计算3种不同的利息的利息和
*/

# include <stdio.h>

int main()
{
    float p0, p3, r3;
    int i;
    float getInterest(float p0);

    freopen("./interest.txt", "r", stdin);
    scanf("%f", &p0);
    for (i=1; i<=2; i++)
        printf("%f\n", getInterest(p0));

    scanf("%f", &r3);
    p3 = p0 * (1 + r3 / 2) * (1 + r3 / 2);
    printf("%f\n", p3);

    return 0;
}

float getInterest(float p0)
{
    float r, p;
    scanf("%f", &r);
    p = p0 * (1 + r);

    return p;
}
/*
输出：
1003.599976
1022.500000
1019.898010

Process returned 0 (0x0)   execution time : 0.031 s
Press any key to continue.
*/
