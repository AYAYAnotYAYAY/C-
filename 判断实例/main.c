#include <stdio.h>
#include <stdlib.h>

int main()
{
int py;

 printf("Boy next door!\n");
    printf("һ����������ĺ������˶���������к�:\n");
    printf("Hello boy do you like van ��Ϸ��\n");
    printf("���������PYָ����\n");
    scanf("%d",&py);
    switch(py)
   {
   case 100:
    printf("100?fuck you!");
    break;
    case 200:
    printf("200?fuck you everyday!");
    break;
 case 500:
    printf("500?fuck you everyday!!!!!");
    break;
 default:
    printf("I do not what you sbeak?");
   }


  double py2;
   printf("Boy next door!\n");
    printf("һ����������ĺ������˶���������к�:\n");
    printf("Hello boy do you like van ��Ϸ��\n");
    printf("���������PYָ����\n");
    scanf("%lf",&py2);
    if(py2 >= 1000 )
    {
        printf("OKС���ӣ���������ʺ���ѧ���������һ����ս��ѧ֮�ۣ�");
    }
    else if(py2 < 1000 && py2>=600)
    {
        printf("Do you like van��Ϸ��");
    }
    else if(py2 <600 &&py2>=300)
    {
        printf("Oh��fuck you");
    }
    else if(py2<300 && py2>=0)
    {
        printf("�������ǲ��ʺ���GAY");
    }
    else
    {
        printf("��");
    }


    return 0;
}
