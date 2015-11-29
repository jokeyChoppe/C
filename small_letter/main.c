/*
2015年11月29日09:56:57
目的：把大写字母改为小写字母
*/

# include <stdio.h>

int main()
{
    char upper_letter, small_letter;
    freopen("./small_letter.txt", "r", stdin);
    scanf("%c", &upper_letter);
    small_letter = upper_letter + ('a' - 'A');
    printf("%c\n%d\n", small_letter, small_letter);

    return 0;
}

/*
输出：
d
100

Process returned 0 (0x0)   execution time : 0.016 s
Press any key to continue.
*/
