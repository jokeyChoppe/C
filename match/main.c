/*
2015��12��13��14:57:18
Ŀ�ģ��ҳ�3�����ֵ���������һ��A,B,C �ڶ���X,Y,Z A ���� X �ȣ�C ���� X, Z��
*/

# include <stdio.h>

int main()
{
    char a, b, c;
    for (a='x'; a<='z'; a++)
        for (b='x'; b<='z'; b++)
            if(a != b)
                for (c='x'; c<='z'; c++)
                {
                    if (a != c && b != c)
                        if (a != 'x' && c != 'x' && c != 'z')   printf("a��%c, b��%c�� c��%c", a, b, c);
                }

    return 0;
}

/*
a��z, b��x�� c��y
Process returned 0 (0x0)   execution time : 0.029 s
Press any key to continue.
*/
