/*
2015��11��30��17:02:27
Ŀ�ģ�����Բ�ܳ���Բ�����Բ��������Բ�������Բ�����
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

    printf("Բ�ܳ�Ϊ��   l=%6.2f\n", l);
    printf("Բ���Ϊ��   s=%6.2f\n", s);
    printf("Բ������Ϊ��   sq=%6.2f\n", sq);
    printf("Բ�����Ϊ��   v=%6.2f\n", vq);
    printf("Բ�����Ϊ��   vz=%6.2f\n", vz);

    return 0;
}

/*
�����
Բ�ܳ�Ϊ��   l=  9.42
Բ���Ϊ��   s=  7.07
Բ������Ϊ��   sq= 28.27
Բ�����Ϊ��   v=  7.95
Բ�����Ϊ��   vz= 21.21

Process returned 0 (0x0)   execution time : 0.086 s
Press any key to continue.
*/
