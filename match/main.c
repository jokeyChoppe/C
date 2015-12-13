/*
2015年12月13日14:57:18
目的：找出3对赛手的名单，第一队A,B,C 第二队X,Y,Z A 不和 X 比，C 不和 X, Z比
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
                        if (a != 'x' && c != 'x' && c != 'z')   printf("a比%c, b比%c， c比%c", a, b, c);
                }

    return 0;
}

/*
a比z, b比x， c比y
Process returned 0 (0x0)   execution time : 0.029 s
Press any key to continue.
*/
