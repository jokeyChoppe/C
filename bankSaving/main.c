/*
2015年11月30日10:43:57
目的：计算银行存款
备注：float数据有效只有6位，double有效位15，包括小数
*/

# include <stdio.h>
# include <math.h>

int main()
{
    int years;
    float p, r1, r2, r3, r5, r0;
    freopen("./bankSaving.txt", "r", stdin);
    scanf("%f%d%f%f%f%f%f", &p, &years, &r1, &r2, &r3, &r5, &r0);
    printf("方案一的本息和为%6.2f\n", p * (1 + years * r5 / 100));
    printf("方案二的本息和为%6.2f\n", p * (1 + 2 * r2 / 100)*(1 + 3 * r3 / 100));
    printf("方案三的本息和为%6.2f\n",  p * (1 + 3 * r3 / 100)*(1 + 2 * r2 / 100));
    printf("方案四的本息和为%6.2f\n", p * pow(1+r1/100, 5));
    printf("方案五的本息和为%6.2f\n", p * pow(1+r0/4/100, 4*years));

    return 0;
}

/*
输出：
方案一的本息和为1292.50
方案二的本息和为1270.76
方案三的本息和为1270.76
方案四的本息和为1224.86
方案五的本息和为1036.62

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
