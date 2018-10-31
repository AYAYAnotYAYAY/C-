#include <stdio.h>
#include <stdlib.h>

int main()
{
    int log=1;
    printf("Boy next door!\n");
    while(log!=80)
    {
        printf("新日暮里的VAN对你实施无差别攻击！你处于无法防御状态。\t   连击:%d\n",log);
        log++;
    }
    printf("VAN不想理你，并向你扔了一个黑暗骑士头套。FUCK YOU!\n");
    printf("你败给了VAN，VAN觉得你是个渣滓。除非，你脱下裤子。呸。除非你算出s累计加到f的值。VAN就教你哲学。\n");
     int s,f;
     printf("请输入s的值\n");
     scanf("%d",&s);
     printf("请输入f的值\n");
     scanf("%d",&f);
     int slj,ls;
     ls=s;
     slj=s+1;
     int jscs=1;
     while(slj<=f )
     {
         ls=ls+slj;
         slj++;
         printf("开始了第%d次计算\t 此时结果等于%d\n",jscs,ls);
         jscs++;
     }

     printf("最终s一直加到f的结果是：%d\n",ls);
     printf("emmmmmmm,这种等差数列求和。其实可以一步到位计算。\n你想试试吗？不想请打1，想按任意键开始计算。");
     int sf,dcjg;
     scanf("%d",&sf);
     if(sf!=1)
     {
         dcjg=(s+f)*(f-s+1)/2;
         printf("最终s一直加到f的结果是：%d\n",dcjg);
     }
     else{
        printf("OK,不想试试就算咯。\n");
     }


     printf("VAN邀请你来到了新日暮里的大门，现在要输入密码才能进入新日暮里。你只有三次机会！\n请输入密码：\n");
     int password,tcs=0,lastzq;
      while(tcs<3)
     {
       tcs++;
       scanf("%d",&password);
       if(password == 112233)
       {
           printf("输入正确，欢迎进入新日暮里！\n");
           lastzq=1;
           break;
       }
       else
        {
        printf("sorry,输入错误，你还有%d次尝试机会。\n",3-tcs);
       }
     }

     if(lastzq==1)
   {
       printf("新日暮里大门已打开，欢迎光临新日暮里。");
       double csjy,mqjy;
       int nf;
       printf("某宝双11在2015年交易额是800亿。每年递增25%%。哪年交易额能达到2000亿？\n");
       nf=2015.0;
       csjy=80000000000.0;
       mqjy=csjy;
       while(mqjy<200000000000.0)
       {
           nf++;
           mqjy=mqjy*1.25;
           printf("今年是%d年，交易额是%.0lf。\n",nf,mqjy);
       }
       printf("今年是%d年，完成了最终目标2000亿，目前真实的交易额是%.0lf。\n",nf,mqjy);
           }
    else{
        printf("小伙子不知道新日暮里暗号。很抱歉，还是不能让你进入，my frined。");
        exit(0);
    }
    return 0;
}
