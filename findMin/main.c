/*
2015��12��4��20:45:49
Ŀ�ģ���3������a, b, c���ɼ������룬���������С����
*/
# include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("min=%d\n", a < b ? (a < c ? a : c) : (b < c ? b : c));
    return 0;
}

/*
�����
12 34 9
min=9

Process returned 0 (0x0)   execution time : 12.719 s
Press any key to continue.
*/
