#include <stdio.h>
#include <stdlib.h>

char dw[11][4]={"��","��","��","Ԫ","ʰ","��","Ǫ","�f","ʰ","��","Ǫ"};
char wsz[10][4]={"��","Ҽ","��","��","��","��","½","��","�X","��"};

int main()
{
    printf("Boy next door!\n");
    void zh(double num);
    double numup;
    for(;;)
    {

        printf("������һ����ת�������֡�����0��ʾ�˳���\n");
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
 int ws;//λ������
  int sz[17];//������������sz��15��Ԫ��
  //��ֵС�����3λ��sz����
        double temp=num;
        temp*=1000;//��С�����3λλ������λʮλ��λ��
    int n=0,i=0;
    for(n;n<3;n++)//��ֵС�����3λ��������
    {
        sz[i]=(int)temp%10;

        temp/=10;
         i++;
    }
    int zsnum=(int)num;//��������������������֡�ǿ��ת������num����������zsnum
    while(zsnum!=0)
    {
        sz[i]=zsnum%10;
        zsnum/=10;
        i++;

    }
    i--;//i�ع������±����λ��

    int p=0;
    printf("��д���Ϊ��");
    int temp2=-1;
    for(p;p<i+1;p++)//��ӡ��д�ַ�
    {
        int temp;
        temp=sz[i-p];
        if(temp==0&&temp2!=0&&i-p>2&&sz[i-p-1]!=0)//�����ֵ����0������һλ���ֲ�Ϊ0���Ҳ��ڷֽ��嵥λ,��һλ��Ҳ��Ϊ0
        {
          printf("%s",wsz[0]);
          temp2=0;//��ʼ���´�0�ж�
        }
        else if(temp==0&&i-p==3)//�����ֵ����0������Ԫ��λ
        {
            printf("%s",dw[3]);
        }

        else if(temp==0&&i-p==7)//�����ֵ����0��������λ
        {
            printf("%s",dw[7]);
        }

        else if(temp==0&&temp2!=0&&i-p>2&&sz[i-p-1]==0)//�����ֵ����0������һλ��ֵΪ0���Ҳ��ڷֽ��嵥λ����һλ��Ϊ0
        {

        }
        else if(temp==0&&i-p<=2)//�����ֵ����0���ڷֽ��嵥λ
        {

        }
        else
        {
         printf("%s",wsz[temp]);
         printf("%s",dw[i-p]);
         temp2=1;//��ʼ��temp2��ʾ��һλ�Ѿ���Ϊ0
        }

    }


    printf("\n");


}
