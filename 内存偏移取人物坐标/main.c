#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


    int zbx,zby,zbz;


 int main()
 {
    int find(int *jz,int fx,int fy,int fz);

        printf("Boy next door!\n");
     int i;
     int q,w,e;
     printf("��������������ά�ռ��Сxyz����*�ָ�xyz��ֵ��\n");
     scanf("%d*%d*%d",&q,&w,&e);
     int zb[q][w][e];//����Ϊq*w*e����γ�ռ�
     for(i=0;i<q;i++)//�������
        {
            int j;
            for(j=0;j<w;j++)
            {
                int z;
                for(z=0;z<e;z++)
                {
                   zb[j][i][z]=0;
                }
            }
        }
        int x,y,h;
        srand(time(NULL));//���һ������
        x=rand()%q;
        Sleep(1000);
        srand(time(NULL));
        y=rand()%w;
        Sleep(1000);
        srand(time(NULL));
        h=rand()%e;
        Sleep(1000);
        zb[x][y][h]=1;//���긳��0ֵ


       printf("���������������\n");
       int jg;//�������������
       int ic,ik,ig;
       ic=sizeof(zb)/sizeof(zb[0]);//һά����
       ik=sizeof(zb[0])/sizeof(zb[0][0]);//��ά����
       ig=sizeof(zb[0][0])/sizeof(zb[0][0][0]);//��γ����
       printf("%d %d  %d",ic,ik,ig);

        jg=find(&zb,ic,ik,ig);
       if(jg==1)
       {
           printf("����Ϊ��x=%d  y=%d  z=%d\n",zbx,zby,zbz);
       }
       else if(jg==0)
       {
           printf("δ�ҵ����꣡\n");
       }
       else
       {
           printf("δ֪����\n");
       }

            printf("��������xyz�鿴��Ӧ��ֵ����*�ָ�xyz������  ����1*8*3����\n");

      for(;;)
      {
          int q1,q2,q3;
           scanf("%d*%d*%d",&q1,&q2,&q3);
           printf("%d\n",zb[q1][q2][q3]);
      }

        return 0;
 }


 int find(int *jz,int fx,int fy,int fz)
 {

     int i;
     int *temp;

      for(i=0;i<fx;i++)//�������
        {

            int j=0;
            for(j;j<fy;j++)
            {
                int z;
                for(z=0;z<fz;z++)
                {

                   temp=jz+z+j*fz+i*fy*fz;//��ֵ��ƫ��
                   printf("��ǰ��ַΪ��%p\tֵΪ��%d\t����Ϊ��%d*%d*%d\n",temp,*temp,i,j,z);
                   if(*temp!=0)
                   {
                       zbx=i;
                       zby=j;
                       zbz=z;
                       return 1;
                   }

                }
            }
        }
        return 0;
 }
