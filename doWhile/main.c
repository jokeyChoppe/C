/*
2015��12��2��21:32:05
Ŀ�ģ��Ա�while��do whileѭ��
*/

# include <stdio.h>

int main()
{
    int i, sum = 0;
    printf("please enter i, i=");
    scanf("%d", &i);
    do
    {
        sum = sum + i;
        i++;
    }while (i <= 10);
    printf("sum=%d\n", sum);

    return 0;
}

/*
�����
please enter i, i=1
sum=55

Process returned 0 (0x0)   execution time : 8.453 s
Press any key to continue.

please enter i, i=11
sum=11

Process returned 0 (0x0)   execution time : 2.984 s
Press any key to continue.
*/
