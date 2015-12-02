/*
2015年12月2日21:24:44
目的：对比while和do while循环
*/

# include <stdio.h>

int main()
{
    int i, sum = 0;
    printf("please enter i, i=");
    scanf("%d", &i);
    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf("sum=%d\n", sum);

    return 0;
}

/*
输出：
please enter i, i=1
sum=55

Process returned 0 (0x0)   execution time : 8.453 s
Press any key to continue.

please enter i, i=11
sum=0

Process returned 0 (0x0)   execution time : 5.188 s
Press any key to continue.
*/
