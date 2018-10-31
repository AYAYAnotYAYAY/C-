#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    printf("Boy next door!\n");
    printf("%d\n",isupper('A'));//判断是否为大写字母非0表示真
    printf("%d\n",islower('a'));//判断是否为小写字母非0表示真
    printf("%d\n",isalpha('g'));//判断是否为字母
    printf("%d\n",isalpha(97));//输入数字表示的为ascii码
    printf("%d\n",isdigit(3));//判断是否为数字   直接输入数字表示ascii码
    printf("%d\n",isdigit('3'));
    printf("%c\n",toupper('r'));//转换为大写字母  %d显示ascii码，%c显示字符
    return 0;
}
