/*
2015年12月13日10:45:11
目的：计算猴子的桃子，猴子每天吃一半多一个，到第10天剩1个
*/

# include <stdio.h>

int main()
{
    int peach = 1, day;
    for (day=9; day>0; day--)
    {
        peach = (peach + 1) * 2;
    }
    printf("一共有桃子：%d\n", peach);
    return 0;
}

/*
输出：
一共有桃子：1534

Process returned 0 (0x0)   execution time : 0.031 s
Press any key to continue.

*/
