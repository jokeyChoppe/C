/*
2015年11月28日20:38:07
目的：把华氏度转变成摄氏度
*/

int main()
{
    float degree, f;
    scanf("%f",&f);

    degree = 5.0 / 9.0 * (f - 32);
    printf("degree=%f\n", degree);

    return 0;
}

/*
输出：

64
degree=17.777779

Process returned 0 (0x0)   execution time : 5.547 s
Press any key to continue.
*/
