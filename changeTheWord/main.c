/*
2015��12��3��23:29:12
Ŀ�ģ������룬����ĸ�Ĳ���
*/

# include <stdio.h>

int main()
{
    char c;
    while ((c = getchar()) != '\n')
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            c = c + 4;
            if ((c > 'Z' && c <= 'Z' + 4) || c > 'z')
                 c = c - 26;
        }
        printf("%c", c);

    }
    printf("\n");
    return 0;
}

/*
�����
China!
Glmre!

Process returned 0 (0x0)   execution time : 12.110 s
Press any key to continue.
*/
