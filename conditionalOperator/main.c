/*
2015年12月1日10:31:38
目的：使用条件运算符判断一个字符是否为大写字母，若是则转换为小写字母
*/

# include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    ch = (ch >= 'A' && ch <= 'Z') ? (ch + 'a' - 'A') : ch;
    printf("%c\n", ch);

    return 0;
}

/*
输入：
A
a

Process returned 0 (0x0)   execution time : 7.406 s
Press any key to continue.
*/
