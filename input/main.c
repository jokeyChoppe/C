/*
2015��11��30��16:21:26
Ŀ�ģ���������ϵ5ʹ��scanf��������
��ע��%e ��scanf������������ %f��ͬ
����ʱע��ո�ͻس��������������������ʱ�谴��ʽ����
*/

# include <stdio.h>

int main()
{
    int a, b;
    float x, y;
    char c1, c2;
    freopen("./input.txt", "r", stdin);
    scanf("a=%d b=%d", &a, &b);
    scanf("%f%e", &a,&y);
    scanf("%c%c", &c1, &c2);
    printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c\n", a, b, x, y, c1, c2);
    return 0;
}

/*
�����
a=3 b=7
8.5 71.82Aa
a=1091043328,b=7,x=0.000000,y=71.820000,c1=A,c2=a

Process returned 0 (0x0)   execution time : 42.938 s
Press any key to continue.
*/
