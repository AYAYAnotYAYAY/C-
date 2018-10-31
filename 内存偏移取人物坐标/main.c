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
     printf("请设置整数型三维空间大小xyz请用*分割xyz的值：\n");
     scanf("%d*%d*%d",&q,&w,&e);
     int zb[q][w][e];//坐标为q*w*e的三纬空间
     for(i=0;i<q;i++)//坐标归零
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
        srand(time(NULL));//随机一个坐标
        x=rand()%q;
        Sleep(1000);
        srand(time(NULL));
        y=rand()%w;
        Sleep(1000);
        srand(time(NULL));
        h=rand()%e;
        Sleep(1000);
        zb[x][y][h]=1;//坐标赋非0值


       printf("启动查找坐标程序：\n");
       int jg;//定义结果存放数据
       int ic,ik,ig;
       ic=sizeof(zb)/sizeof(zb[0]);//一维长度
       ik=sizeof(zb[0])/sizeof(zb[0][0]);//二维长度
       ig=sizeof(zb[0][0])/sizeof(zb[0][0][0]);//三纬长度
       printf("%d %d  %d",ic,ik,ig);

        jg=find(&zb,ic,ik,ig);
       if(jg==1)
       {
           printf("坐标为：x=%d  y=%d  z=%d\n",zbx,zby,zbz);
       }
       else if(jg==0)
       {
           printf("未找到坐标！\n");
       }
       else
       {
           printf("未知错误！\n");
       }

            printf("输入坐标xyz查看对应的值（用*分割xyz的数据  例：1*8*3）：\n");

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

      for(i=0;i<fx;i++)//坐标归零
        {

            int j=0;
            for(j;j<fy;j++)
            {
                int z;
                for(z=0;z<fz;z++)
                {

                   temp=jz+z+j*fz+i*fy*fz;//基值加偏移
                   printf("当前地址为：%p\t值为：%d\t坐标为：%d*%d*%d\n",temp,*temp,i,j,z);
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
