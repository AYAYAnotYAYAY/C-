#include <stdio.h>
#include <stdlib.h>

int main()
{
    int log=1;
    printf("Boy next door!\n");
    while(log!=80)
    {
        printf("����ĺ���VAN����ʵʩ�޲�𹥻����㴦���޷�����״̬��\t   ����:%d\n",log);
        log++;
    }
    printf("VAN�������㣬����������һ���ڰ���ʿͷ�ס�FUCK YOU!\n");
    printf("��ܸ���VAN��VAN�������Ǹ����ҡ����ǣ������¿��ӡ��ޡ����������s�ۼƼӵ�f��ֵ��VAN�ͽ�����ѧ��\n");
     int s,f;
     printf("������s��ֵ\n");
     scanf("%d",&s);
     printf("������f��ֵ\n");
     scanf("%d",&f);
     int slj,ls;
     ls=s;
     slj=s+1;
     int jscs=1;
     while(slj<=f )
     {
         ls=ls+slj;
         slj++;
         printf("��ʼ�˵�%d�μ���\t ��ʱ�������%d\n",jscs,ls);
         jscs++;
     }

     printf("����sһֱ�ӵ�f�Ľ���ǣ�%d\n",ls);
     printf("emmmmmmm,���ֵȲ�������͡���ʵ����һ����λ���㡣\n���������𣿲������1���밴�������ʼ���㡣");
     int sf,dcjg;
     scanf("%d",&sf);
     if(sf!=1)
     {
         dcjg=(s+f)*(f-s+1)/2;
         printf("����sһֱ�ӵ�f�Ľ���ǣ�%d\n",dcjg);
     }
     else{
        printf("OK,�������Ծ��㿩��\n");
     }


     printf("VAN����������������ĺ��Ĵ��ţ�����Ҫ����������ܽ�������ĺ���ֻ�����λ��ᣡ\n���������룺\n");
     int password,tcs=0,lastzq;
      while(tcs<3)
     {
       tcs++;
       scanf("%d",&password);
       if(password == 112233)
       {
           printf("������ȷ����ӭ��������ĺ�\n");
           lastzq=1;
           break;
       }
       else
        {
        printf("sorry,��������㻹��%d�γ��Ի��ᡣ\n",3-tcs);
       }
     }

     if(lastzq==1)
   {
       printf("����ĺ������Ѵ򿪣���ӭ��������ĺ�");
       double csjy,mqjy;
       int nf;
       printf("ĳ��˫11��2015�꽻�׶���800�ڡ�ÿ�����25%%�����꽻�׶��ܴﵽ2000�ڣ�\n");
       nf=2015.0;
       csjy=80000000000.0;
       mqjy=csjy;
       while(mqjy<200000000000.0)
       {
           nf++;
           mqjy=mqjy*1.25;
           printf("������%d�꣬���׶���%.0lf��\n",nf,mqjy);
       }
       printf("������%d�꣬���������Ŀ��2000�ڣ�Ŀǰ��ʵ�Ľ��׶���%.0lf��\n",nf,mqjy);
           }
    else{
        printf("С���Ӳ�֪������ĺ�ﰵ�š��ܱ�Ǹ�����ǲ���������룬my frined��");
        exit(0);
    }
    return 0;
}
