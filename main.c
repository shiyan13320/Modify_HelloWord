/****************************
Copyright:
File name:HelloWord
Description:���û������ַ�����������ȫ�ֱ���������ӡȫ�ֱ�����
Author:shiyan
Version:1.0
Data:2020/06/19
History:
*****************************/
#include <stdio.h>
#include <stdlib.h>
#define MAX_Hello 25

/* �û�������ַ���������ȫ�ֱ����� */
char g_helloword[MAX_Hello];

void functiona(int x)
{
    printf("%d\n", x);
}

int main()
{
    printf("Please input string:\n");
    scanf("%s", g_helloword);
    printf("%s", g_helloword);

    functiona(5);

    return 0;
}
