/*
2015��12��8��22:41:27
Ŀ�ģ�����һ���ַ�,�ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ�����
*/

# include <stdio.h>

int main()
{
    char c;
    int letters = 0, space = 0, digit = 0, other = 0;
    freopen("./countCharacter.txt", "r", stdin);
    while ((c = getchar()) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters++;
        else if (c == ' ')
            space++;
        else if (c >= '0' && c <= '9')
            digit++;
        else
            other++;
    }
    printf("letters=%d space=%d digit=%d other=%d\n", letters, space, digit, other);
    return 0;
}
/*
�����
I am a student.
letters=11 space=3 digit=0 other=1

Process returned 0 (0x0)   execution time : 14.672 s
Press any key to continue.
*/
