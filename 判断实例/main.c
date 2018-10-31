#include <stdio.h>
#include <stdlib.h>

int main()
{
int py;

 printf("Boy next door!\n");
    printf("一个来自新日暮里的男人对你打了声招呼:\n");
    printf("Hello boy do you like van 游戏？\n");
    printf("请输入你的PY指数：\n");
    scanf("%d",&py);
    switch(py)
   {
   case 100:
    printf("100?fuck you!");
    break;
    case 200:
    printf("200?fuck you everyday!");
    break;
 case 500:
    printf("500?fuck you everyday!!!!!");
    break;
 default:
    printf("I do not what you sbeak?");
   }


  double py2;
   printf("Boy next door!\n");
    printf("一个来自新日暮里的男人对你打了声招呼:\n");
    printf("Hello boy do you like van 游戏？\n");
    printf("请输入你的PY指数：\n");
    scanf("%lf",&py2);
    if(py2 >= 1000 )
    {
        printf("OK小伙子，看来你很适合哲学，不如跟我一起挑战哲学之巅？");
    }
    else if(py2 < 1000 && py2>=600)
    {
        printf("Do you like van游戏？");
    }
    else if(py2 <600 &&py2>=300)
    {
        printf("Oh，fuck you");
    }
    else if(py2<300 && py2>=0)
    {
        printf("我想我们不适合做GAY");
    }
    else
    {
        printf("滚");
    }


    return 0;
}
