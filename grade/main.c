/*
2015年12月1日10:43:14
目的：使用switch语句输入分数等级输出分数段
*/

# include <stdio.h>

int main()
{
    char grade;
    scanf("%c", &grade);
    printf("Your score:");
    switch(grade)
    {
        case 'A': printf("85 ~ 100\n");break;
        case 'B': printf("70 ~ 84\n");break;
        case 'C': printf("60 ~ 69\n");break;
        case 'D': printf("< 60\n");break;
        default : printf("enter data error!\n");
    }
    return 0;
}

/*
输出：
A
Your score:85 ~ 100

Process returned 0 (0x0)   execution time : 7.391 s
Press any key to continue.
*/
