/*
2015年11月30日23:09:13
目的：输入3个数从小到大顺序输出
*/

# include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    void exchangeVariable(float *a, float *b);

    if (a > b)
        exchangeVariable(&a, &b);
    if (a > c)
        exchangeVariable(&a, &c);
    if (b > c)
        exchangeVariable(&b, &c);

    printf("%5.2f,%5.2f,%5.2f\n", a, b, c);

    return 0;
}

void exchangeVariable(float *a, float *b)
{
    float t;
    t = *a;
    *a = *b;
    *b = t;

    return ;
}

/*
输出：
3 7 1
 1.00, 3.00, 7.00

Process returned 0 (0x0)   execution time : 9.110 s
Press any key to continue.
*/
