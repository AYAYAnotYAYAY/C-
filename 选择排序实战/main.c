#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("请输入想排序的数字数量：\n");
    int c=5;
    scanf("%d",&c);
    int num1[c],i,o;
    o=sizeof(num1)/sizeof(num1[1]);
    for(i=0;i<o;i++)
    {
        scanf("%d",&num1[i]);
    }
    i=0;
    int j,z,r;
    //选择排序，从n个数据里找到最小的那个，放到首位。然后再从剩下的n-1个数据继续比较
    for(i;i<o-1;i++)//外层循环，控制比较次数
    {
            for(j=i;j<o;j++)//里层循环，单次比较排序
            {
               if(num1[i]>num1[j])
               {
                   z=num1[i];

                   num1[i]=num1[j];
                   num1[j]=z;

               }

            }



    }

    for(i=0;i<o;i++)//输出结果
    {
       printf("%d  ",num1[i]);
    }
    return 0;
}
