#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
/*描述
现在给你N个数（0<N<1000），现在要求你写出一个程序，找出这N个数中的所有素数，并求和。
输入
第一行给出整数M(0<M<10)代表多少组测试数据
每组测试数据第一行给你N，代表该组测试数据的数量。
接下来的N个数为要测试的数据，每个数小于1000
输出
每组测试数据结果占一行，输出给出的测试数据的所有素数和
样例输入
3
5
1 2 3 4 5
8
11 12 13 14 15 16 17 18
10
21 22 23 24 25 26 27 28 29 30
样例输出
10
41
52
*/
int pdss(int num)//声明一个判断是否为素数函数，方便调用。需提供需判断的数字作为参数num。
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
    printf("第一行数据M（M代表多少组测试数据。）\n");
    printf("请输入：\n");
    scanf("%d",&m);
    if(0<m&&m<1000)
    {
       m2=m;
    int jg[m];
    for(m;m>0;m--)//测试多少组循环
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

        printf("输出：\n");
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

