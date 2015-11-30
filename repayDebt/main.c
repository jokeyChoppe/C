/*
2015年11月30日15:33:31
目的：还银行贷款
*/

# include <stdio.h>
# include <math.h>

int main()
{
    float debt, p, r, months;
    freopen("./repayDebt.txt", "r", stdin);
    scanf("%f%f%f", &debt, &p, &r);
    months = log10(p / (p - debt * r/100)) / log10(1 + r/100);
    printf("需要还%6.1f个月\n", months);

    return 0;
}

/*
输出：
需要还  69.7个月

Process returned 0 (0x0)   execution time : 0.094 s
Press any key to continue.
*/
