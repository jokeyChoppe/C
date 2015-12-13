/*
2015年12月13日10:23:20
目的：计算小球第10次落地经过的路程和第10次反弹的高度
*/

# include <stdio.h>

int main()
{
    int i;
    float fallDown = 100, sum = 100;
    for (i=1; i<=10; i++)
    {
        sum += fallDown;
        fallDown /= 2;
    }

    printf("第10次反弹高度：%f，落地时经过的路程：%f", sum, fallDown);


/*    double sn = 100, hn = sn / 2;
    int n;
    for (n=2; n<=10; n++)
    {
        sn = sn + hn * 2;
        hn = hn / 2;
    }
    printf("第10次落地时经过%f米\n", sn);
    printf("第10次反弹%f米\n", hn);*/

    return 0;
}

/*
输出：
第10次反弹高度：299.804688，落地时经过的路程：0.097656
Process returned 0 (0x0)   execution time : 0.077 s
Press any key to continue.
备注： 书上的比较好理解
*/
