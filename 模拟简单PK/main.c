#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int PK(int p1hp,int p2power,int y,int t)
{
    int sh;
    Sleep(1000);
   srand(time(NULL));//��ʱ���������������
   sh=(rand()%11)*p2power/10+5;
   p1hp=p1hp-sh;
   if(p1hp<=0)
   {
       printf("���%d�����%d�����˹����������%d���˺������ܶԷ�����ϲ���%d���ʤ����\n",t,y,sh,t);
       return p1hp;
   }
   else{
    printf("���%d�����%d�����˹����������%d���˺���\n",t,y,sh);
   return p1hp;
   }

}
int main()
{

    printf("Boy next door!�Ƿ�ʼս������������1����������������Ϸ��\n");
    srand(time(NULL));
    int yesorno;
    scanf("%d",&yesorno);
   if(yesorno==1)
   {
      int play1power,play2power,p1hp,p2hp;
       printf("Boy next door!ս����ʼ\n");
       printf("������P1��ҵ�����ֵ\n");
       scanf("%d",&play1power);
       printf("������P2�������ֵ\n");
       scanf("%d",&play2power);
       printf("������p1��ҵ�HP\n");
       scanf("%d",&p1hp);
       printf("������p2��ҵ�HP\n");
       scanf("%d",&p2hp);
                while(p1hp>0&&p2hp>0)
       {
           p1hp=PK(p1hp,play2power,1,2);//���2����
           if(p1hp>0)
           {
              p2hp=PK(p2hp,play1power,2,1);//���1����
           }



           printf("��ʱ���1��HPΪ%d\t  ���2��HPΪ%d\n",p1hp,p2hp);
       }


   }
   else
   {
       printf("Boy next door!�ܾ�ս������Ϸ������\n");
   }
    return 0;
}

