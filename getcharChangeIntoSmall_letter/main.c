/*
2015��11��29��21:42:21
Ŀ�ģ�ʹ��getchar������ȡ�ַ������ַ���ΪСд��ĸ
*/

# include <stdio.h>

int main()
{
    char c1, c2;
    c1 = getchar();
    c2 =c1 + 32;
    putchar(c2);
    putchar('\n');
    printf("��д��ĸ��%c\nСд��ĸ��%c\n", c1, c2);

    return 0;
}

/*
�����
A
a
��д��ĸ��A
Сд��ĸ��a

Process returned 0 (0x0)   execution time : 6.922 s
Press any key to continue.
*/
