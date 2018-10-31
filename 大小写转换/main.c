#include <stdio.h>
#include <stdlib.h>

char dw[11][4]={"厘","分","角","元","拾","佰","仟","萬","拾","佰","仟"};
char wsz[10][4]={"零","壹","贰","叁","肆","伍","陆","柒","玐","玖"};

int main()
{
    printf("Boy next door!\n");
    void zh(double num);
    double numup;
    for(;;)
    {

        printf("请输入一个待转换的数字。输入0表示退出：\n");
        scanf("%lf",&numup);
        if(numup==0)
        {
            return 0;
        }
        else{
            zh(numup);
        }
    }

    return 0;
}

void zh(double num)
{
 int ws;//位数变量
  int sz[17];//定义整数数组sz。15个元素
  //赋值小数点后3位至sz数组
        double temp=num;
        temp*=1000;//把小数点后3位位移至个位十位百位。
    int n=0,i=0;
    for(n;n<3;n++)//赋值小数点后3位数至数组
    {
        sz[i]=(int)temp%10;

        temp/=10;
         i++;
    }
    int zsnum=(int)num;//整数变量，金额整数部分。强制转换参数num至整数变量zsnum
    while(zsnum!=0)
    {
        sz[i]=zsnum%10;
        zsnum/=10;
        i++;

    }
    i--;//i回归坐标下标最高位数

    int p=0;
    printf("大写金额为：");
    int temp2=-1;
    for(p;p<i+1;p++)//打印大写字符
    {
        int temp;
        temp=sz[i-p];
        if(temp==0&&temp2!=0&&i-p>2&&sz[i-p-1]!=0)//如果数值等于0，且上一位数字不为0，且不在分角厘单位,下一位数也不为0
        {
          printf("%s",wsz[0]);
          temp2=0;//初始化下次0判断
        }
        else if(temp==0&&i-p==3)//如果数值等于0，且在元单位
        {
            printf("%s",dw[3]);
        }

        else if(temp==0&&i-p==7)//如果数值等于0，且在万单位
        {
            printf("%s",dw[7]);
        }

        else if(temp==0&&temp2!=0&&i-p>2&&sz[i-p-1]==0)//如果数值等于0，且上一位数值为0，且不在分角厘单位，下一位数为0
        {

        }
        else if(temp==0&&i-p<=2)//如果数值等于0，在分角厘单位
        {

        }
        else
        {
         printf("%s",wsz[temp]);
         printf("%s",dw[i-p]);
         temp2=1;//初始化temp2表示上一位已经不为0
        }

    }


    printf("\n");


}
