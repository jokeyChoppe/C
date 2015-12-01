/*
2015年12月1日15:49:21
目的：使用switch语句计算运输费用
*/

# include <stdio.h>

int main()
{
    int c;
    float price, weight, discount, freight, distance;
    printf("please enter price, weight, distance:");
    scanf("%f%f%f", &price, &weight, &distance);
    if (distance >= 3000) c = 12;
    else c = distance / 250;

    switch(c)
    {
        case 0: discount = 0; break;
        case 1: discount = 2; break;
        case 2:
        case 3: discount = 5; break;
        case 4:
        case 5:
        case 6:
        case 7: discount = 8; break;
        case 8:
        case 9:
        case 10:
        case 11: discount = 10; break;
        case 12: discount = 15; break;

    }
    freight = price * weight * distance * (1 - discount / 100);
    printf("freight=%10.2f\n", freight);

    return 0;
}

/*
输出：
please enter price, weight, distance:100 20 300
freight= 588000.00

Process returned 0 (0x0)   execution time : 15.441 s
Press any key to continue.
*/
