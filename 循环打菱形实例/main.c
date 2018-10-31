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
       //执行打印上半部分
        int hs,kg,xin;
        for(hs=0;hs<(firestlong-1)/2;hs++)
        {
            kg=(firestlong-1)/2-hs;
            xin=firestlong-kg*2;
            //打印空格
            //打印星号
            //换行
            //行数+1.
            for (kg;kg>0;kg--)//空格
            {
                printf(" ");
            }
            for(xin;xin>0;xin--)//星号
            {
                printf("*");
            }
            printf("\n");//换行
        }


   }
   else if(shangxia==0)
{
       //执行打印下半部分
       int hs=0,kg=1,z,r;
       int xin=firestlong-kg-1;
        for(hs;hs<(firestlong-1)/2;hs++)
        {


            //打印空格
            //打印星号
            //换行
            //行数+1.
            for (z=0;z<kg;z++)//空格
            {
                printf(" ");
            }
            ++kg;

            for(r=0;r<xin;r++)//星号
            {
                printf("*");
            }
            xin--;
            xin--;

            printf("\n");//换行
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
    printf("请输入菱形最长的长度（0表示退出）：\n");
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
    printf("输入的是双数，请重新输入！\n");

    }
    else
    {
     dyygcd(sf);
     printf("打印完成，请继续输入棱形大小。\n");

    }
    }

    return 0;
}



