/*
2015��12��4��22:06:38
Ŀ�ģ�����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ�
*/
# include <stdio.h>

int main()
{
    float score;
    scanf("%f", &score);
    while (score > 100 || score < 0)
    {
        printf("\n��������������\n");
        scanf("%f", &score);
    }
    char grade;
    switch((int)score/10)
    {
        case 9 : grade = 'A'; break;
        case 8 : grade = 'B'; break;
        case 7 : grade = 'C'; break;
        case 6 : grade = 'D'; break;
        default : grade = 'E';
    }

    printf("%c", grade);

    return 0;
}

/*
�����
90.5
A
Process returned 0 (0x0)   execution time : 6.541 s
Press any key to continue.
*/
