#include <stdio.h>
#include <stdlib.h>
/*数组
数组：
标识符：数组的名称
数组元素：每个数组中的具体数据
元素下标：每个数据的编号
元素类型：每个数据的类型比如int double
*/

//有一个循环数列8，4，2，1，23，344，12
//求数列中所有数值的和及平均值
//猜数游戏：从键盘输入任意一个数据，判断数列中是否包含此数、（穷举。无聊省略）
//冒泡排序降序
int main()
{

  int num[7]={8,4,2,1,23,344,12};
   //计算求和
   int jg=0,cs=0;
   double pjz;
   for(cs;cs<7;cs++)
   {
       jg+=num[cs];
   }
   printf("和值为：%d\n",jg);
            pjz=jg/7;
   printf("平均值为：%.2lf\n",pjz);


   //数组排序冒泡法
       int cd,cd1,qjcs=0;
       cd=sizeof(num)/sizeof(num[0]);//取数组num长度除以单个数据长度得到数组里元素数量
       for(cd1=0;cd1<cd-1;cd1++)//循环元素减1次冒泡排序
        {
       int i=0,c=0;
         for(c;c<cd-1-qjcs;c++)//单次排序
         {
             i=num[c]<num[c+1];
             if(i==1)
             {
                 int lsc,lsc1;
                 lsc=num[c];
                 lsc1=num[c+1];
                 num[c]=lsc1;
                 num[c+1]=lsc;

             }
         }
         qjcs++;
        }
        int h=0;
        for(h;h<cd;h++)
        {
            printf("%d\n",num[h]);
        }
    return 0;
}
