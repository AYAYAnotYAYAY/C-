#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    printf("Boy next door!\n");
    printf("%d\n",isupper('A'));//�ж��Ƿ�Ϊ��д��ĸ��0��ʾ��
    printf("%d\n",islower('a'));//�ж��Ƿ�ΪСд��ĸ��0��ʾ��
    printf("%d\n",isalpha('g'));//�ж��Ƿ�Ϊ��ĸ
    printf("%d\n",isalpha(97));//�������ֱ�ʾ��Ϊascii��
    printf("%d\n",isdigit(3));//�ж��Ƿ�Ϊ����   ֱ���������ֱ�ʾascii��
    printf("%d\n",isdigit('3'));
    printf("%c\n",toupper('r'));//ת��Ϊ��д��ĸ  %d��ʾascii�룬%c��ʾ�ַ�
    return 0;
}
