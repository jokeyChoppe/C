/*
2015��12��13��11:33:38
Ŀ�ģ����һ��7�е�����
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
�����
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
