#include <stdio.h>
#include <stdlib.h>

void dyygcd(int dycd)
{
    printflengxing(dycd,1);

    printflengxing(dycd,2);
     printflengxing(dycd,0);
}
void printflengxing(int firestlong,int shangxia)
{
   if(shangxia==1)
   {
       //ִ�д�ӡ�ϰ벿��
        int hs,kg,xin;
        for(hs=0;hs<(firestlong-1)/2;hs++)
        {
            kg=(firestlong-1)/2-hs;
            xin=firestlong-kg*2;
            //��ӡ�ո�
            //��ӡ�Ǻ�
            //����
            //����+1.
            for (kg;kg>0;kg--)//�ո�
            {
                printf(" ");
            }
            for(xin;xin>0;xin--)//�Ǻ�
            {
                printf("*");
            }
            printf("\n");//����
        }


   }
   else if(shangxia==0)
{
       //ִ�д�ӡ�°벿��
       int hs=0,kg=1,z,r;
       int xin=firestlong-kg-1;
        for(hs;hs<(firestlong-1)/2;hs++)
        {


            //��ӡ�ո�
            //��ӡ�Ǻ�
            //����
            //����+1.
            for (z=0;z<kg;z++)//�ո�
            {
                printf(" ");
            }
            ++kg;

            for(r=0;r<xin;r++)//�Ǻ�
            {
                printf("*");
            }
            xin--;
            xin--;

            printf("\n");//����
        }


   }
else
{
    int zdcs;
    for(zdcs=0;zdcs<firestlong;zdcs++)
    {
        printf("*");

    }
printf("\n");

}
}
int main()
{
    printf("Boy next door!\n");
    printf("������������ĳ��ȣ�0��ʾ�˳�����\n");
    int sf;
    for(;;)
    {
      scanf("%d",&sf);
    if(sf==0)
    {
        return 0;
    }
    else if(sf%2==0)
    {
    printf("�������˫�������������룡\n");

    }
    else
    {
     dyygcd(sf);
     printf("��ӡ��ɣ�������������δ�С��\n");

    }
    }

    return 0;
}



