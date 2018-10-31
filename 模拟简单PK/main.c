#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int PK(int p1hp,int p2power,int y,int t)
{
    int sh;
    Sleep(1000);
   srand(time(NULL));//以时间重置随机数种子
   sh=(rand()%11)*p2power/10+5;
   p1hp=p1hp-sh;
   if(p1hp<=0)
   {
       printf("玩家%d对玩家%d发起了攻击。造成了%d点伤害。击败对方！恭喜玩家%d获得胜利！\n",t,y,sh,t);
       return p1hp;
   }
   else{
    printf("玩家%d对玩家%d发起了攻击。造成了%d点伤害。\n",t,y,sh);
   return p1hp;
   }

}
int main()
{

    printf("Boy next door!是否开始战斗？是请输入1，按其他键结束游戏。\n");
    srand(time(NULL));
    int yesorno;
    scanf("%d",&yesorno);
   if(yesorno==1)
   {
      int play1power,play2power,p1hp,p2hp;
       printf("Boy next door!战斗开始\n");
       printf("请输入P1玩家的力量值\n");
       scanf("%d",&play1power);
       printf("请输入P2玩家力量值\n");
       scanf("%d",&play2power);
       printf("请输入p1玩家的HP\n");
       scanf("%d",&p1hp);
       printf("请输入p2玩家的HP\n");
       scanf("%d",&p2hp);
                while(p1hp>0&&p2hp>0)
       {
           p1hp=PK(p1hp,play2power,1,2);//玩家2攻击
           if(p1hp>0)
           {
              p2hp=PK(p2hp,play1power,2,1);//玩家1攻击
           }



           printf("此时玩家1的HP为%d\t  玩家2的HP为%d\n",p1hp,p2hp);
       }


   }
   else
   {
       printf("Boy next door!拒绝战斗，游戏结束。\n");
   }
    return 0;
}

