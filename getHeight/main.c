/*
2015��12��4��23:10:31
Ŀ�ģ���һ��Ľ�����ĸ߶�
*/

# include <stdio.h>
# include <math.h>

int main()
{
    int height = 10;
    float x1 = 2, y1= 2, x2 = -2, y2= 2, x3 = -2, y3= -2, x4 = 2, y4= -2;
    float x, y, d1, d2, d3, d4;
    printf("������һ����(x, y):");
    scanf("%f%f", &x, &y);
    d1 = pow(x - x4,2) + pow(y - y4, 2);
    d2 = pow(x - x1,2) + pow(y - y1, 2);
    d3 = pow(x - x2,2) + pow(y - y2, 2);
    d4 = pow(x - x3,2) + pow(y - y3, 2);
    if (d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1)
        height = 0;
    printf("�õ�߶�Ϊ%d\n", height);
    return 0;
}

/*
�����
������һ����(x, y):0.5 0.7
�õ�߶�Ϊ0

Process returned 0 (0x0)   execution time : 13.563 s
Press any key to continue.
*/
