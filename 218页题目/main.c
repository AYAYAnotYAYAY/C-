#include <cuda_runtime.h>
int main()
{
    printf("Boy next door!\n");
   /*__________________________________________________________________________________________________________________
   第一题：写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果。两个整数由键盘输入。
   _____________________________________________________________________________________________________________________*/
   extern int zuidagongyueshu(int num1,int num2);//最小公约数
   extern int zuixiaogongbeishu(int num1,int num2);//最大公倍数
   printf("请输入2个数，将计算他们的最大公约数和最小公倍数：\n");
   int o,p;
   scanf("%d",&o);
   scanf("%d",&p);
    printf("他们的最大公约数是：%d\n",zuidagongyueshu(o,p));
    printf("他们的最小公倍数是：%d\n",zuixiaogongbeishu(o,p));



    return 0;
}
