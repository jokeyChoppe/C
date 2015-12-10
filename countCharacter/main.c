/*
2015年12月8日22:41:27
目的：输入一行字符,分别统计出其中英文字母、空格、数字和其他字符个数
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
输出：
I am a student.
letters=11 space=3 digit=0 other=1

Process returned 0 (0x0)   execution time : 14.672 s
Press any key to continue.
*/
