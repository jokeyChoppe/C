/*
2015年12月13日11:33:38
目的：输出一个7行的棱形
*/
# include <stdio.h>
# include <math.h>

int main()
{
    int i,j,k;
    for (i=1; i<=7; i++)
    {
        for (j = fabs(i - 7/2 - 1); j>0; j--)
            printf(" ");
        for (k=7-2*fabs(i - 7/2 - 1);  k>0; k--)
            printf("*");
        printf("\n");
    }
    return 0;
}

/*
输出：
   *
  ***
 *****
*******
 *****
  ***
   *

Process returned 0 (0x0)   execution time : 0.052 s
Press any key to continue.
*/
