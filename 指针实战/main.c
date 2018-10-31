#include <stdio.h>
#include <stdlib.h>
//嘻嘻，终于回归老本行了


void zzsx(int *num,int cd)//定义空返回值函数zzsx指针操作完成数组升序模块。参数为数组名的地址
{
   int w=0;
   for(w;w<cd-1;w++)
   {
       int y=0;
       for(y;y<cd-w-1;y++)
       {
           int jg,temp;
           jg=num[y]<num[y+1];
           if(jg==1)
           {
               temp=num[y];
               num[y]=num[y+1];
               num[y+1]=temp;

           }
       }
   }

}





int main()
{
    printf("Boy next door！\n");
    //给你一。。。。。张过去的CD聆听我们那时的爱情。
    //给一组一维数组。用不同方法输出升序。（且数组元素数量为任意值时均无bug）
    int num[]={11452,66547,87412,55,66987,557744,33256,36987,112,147258,1,369852,774521,387420,489};
    /*
    int cd=sizeof(num)/sizeof(num[0]);//计算数组长度
    //第一种，for循环冒泡升序降序。
    printf("方法一升序：\n");
    int cs=0,temp,xhcs=0;//定义变量，循环次数，临时判断结果存放temp,已经循环的次数
     for(cs;cs<cd-1;cs++)//循环排序
     {
        int o=0;//循环次数变量
        for(o;o<cd-1-xhcs;o++)//单行循环
        {
        temp=num[o]<num[o+1];
        if(temp==1)
            {
            int tempcs,tempcs1;
            tempcs=num[o];
            tempcs1=num[o+1];
            num[o]=tempcs1;
            num[o+1]=tempcs;
            }
        }
        xhcs++;
     }
*/
     zzsx(&num,sizeof(num)/sizeof(num[0]));
     printf("打印排序后结果：\n");
        int y=0;
    for(y;y<sizeof(num)/sizeof(num[1]);y++)
    {


        printf("%d\n",num[y]);
    }
    return 0;
}
