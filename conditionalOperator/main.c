/*
2015��12��1��10:31:38
Ŀ�ģ�ʹ������������ж�һ���ַ��Ƿ�Ϊ��д��ĸ��������ת��ΪСд��ĸ
*/

# include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    ch = (ch >= 'A' && ch <= 'Z') ? (ch + 'a' - 'A') : ch;
    printf("%c\n", ch);

    return 0;
}

/*
���룺
A
a

Process returned 0 (0x0)   execution time : 7.406 s
Press any key to continue.
*/
