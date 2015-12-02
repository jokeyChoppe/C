/*
2015年12月2日22:46:08
目的：求斐波那契数列前40个数
*/

# include <stdio.h>

int main()
{
    int month1 = 1, month2 = 1, month3;
    int i = 3;
    printf("%12d %12d ", month1, month2);
    for (; i<=40; i++)
    {
       month3 = month1 + month2;
       month1 = month2;
       month2 = month3;
       printf("%12d ", month3);
        if (i % 4 == 0)
            printf("\n");
    }
    return 0;
}

/*
输出：
           1            1            2            3
           5            8           13           21
          34           55           89          144
         233          377          610          987
        1597         2584         4181         6765
       10946        17711        28657        46368
       75025       121393       196418       317811
      514229       832040      1346269      2178309
     3524578      5702887      9227465     14930352
    24157817     39088169     63245986    102334155

Process returned 0 (0x0)   execution time : 0.078 s
Press any key to continue.
*/
