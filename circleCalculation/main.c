/*
2015年11月30日17:02:27
目的：计算圆周长，圆面积，圆球表面积，圆球体积，圆柱体积
*/

# include <stdio.h>
# include <math.h>

int main()
{
    float h, r, l, s, sq, vq, vz;
    float pi = 3.141526;
    freopen("./circleCalculation.txt", "r", stdin);
    scanf("%f%f", &r, &h);

    l = 2 * pi * r;
    s = pow(r, 2) * pi;
    sq = 4 * pi * pow(r, 2);
    vq = 3.0 / 4.0 * pi * pow(r, 3);
    vz = pi * pow(r, 2) * h;

    printf("圆周长为：   l=%6.2f\n", l);
    printf("圆面积为：   s=%6.2f\n", s);
    printf("圆球表面积为：   sq=%6.2f\n", sq);
    printf("圆球体积为：   v=%6.2f\n", vq);
    printf("圆柱体积为：   vz=%6.2f\n", vz);

    return 0;
}

/*
输出：
圆周长为：   l=  9.42
圆面积为：   s=  7.07
圆球表面积为：   sq= 28.27
圆球体积为：   v=  7.95
圆柱体积为：   vz= 21.21

Process returned 0 (0x0)   execution time : 0.086 s
Press any key to continue.
*/
