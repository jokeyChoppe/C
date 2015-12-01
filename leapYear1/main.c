/*
2015年12月1日11:21:20
目的：判断闰年
备注：bool类型在# include <stdbool.h>中
*/

# include <stdio.h>
# include <stdbool.h>

int main()
{
    int year;
    bool leap;
    scanf("%d", &year);
    if ((year % 4 == 0 && year %100 != 0) || (year % 400 == 0))
        leap = true;
    else
        leap = false;
    if (leap)
        printf("%d is", year);
    else
        printf("%d is not", year);
    printf("a leap year.\n");
    return 0;
}

/*
输出：
2050
2050 is nota leap year.

Process returned 0 (0x0)   execution time : 6.859 s
Press any key to continue.
*/
