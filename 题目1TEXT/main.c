#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
/*����
���ڸ���N������0<N<1000��������Ҫ����д��һ�������ҳ���N�����е���������������͡�
����
��һ�и�������M(0<M<10)����������������
ÿ��������ݵ�һ�и���N���������������ݵ�������
��������N����ΪҪ���Ե����ݣ�ÿ����С��1000
���
ÿ��������ݽ��ռһ�У���������Ĳ������ݵ�����������
��������
3
5
1 2 3 4 5
8
11 12 13 14 15 16 17 18
10
21 22 23 24 25 26 27 28 29 30
�������
10
41
52
*/
int pdss(int num)//����һ���ж��Ƿ�Ϊ����������������á����ṩ���жϵ�������Ϊ����num��
{
    int bcs,cfjg;
    double hz=0;
    bcs=2;
    if(num==-2||num==2)
    {
        return 1;
    }
    else if(num==0||num==1||num==-1)
    {
       return 0;
    }
    else
        {
           while(bcs<num)
           {
               cfjg=num%bcs++;
               hz+=cfjg;

               if(cfjg==0)
               {


                   return 0;
               }
               else if(num==bcs)
                {

                return 1;

                }



           }
        }
}

int main()
{
    int m,m2;
    printf("��һ������M��M���������������ݡ���\n");
    printf("�����룺\n");
    scanf("%d",&m);
    if(0<m&&m<1000)
    {
       m2=m;
    int jg[m];
    for(m;m>0;m--)//���Զ�����ѭ��
    {
            int n,n2;
            int mc=0;
            scanf("%d",&n);
            if(0<n&&n<=10)
            {
              scanf("%d",&n2);
            int hz=0;
            int pdjg;
                for(mc;mc<n;mc++)
                {


                   pdjg=pdss(n2);
                   printf("%d ",n2);
                   if(pdjg==1)
                   {
                       hz=hz+n2;

                   }
                   n2++;

                }
                jg[m]=hz;
                printf("\n");
            }
            else{return 0;}


    }

        printf("�����\n");
    for(m2;m2>0;m2--)
    {

    printf("%d\n",jg[m2]);
    }
    }
    else
    {
        return 0;
    }

    return 0;
}

