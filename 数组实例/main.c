#include <stdio.h>
#include <stdlib.h>
/*����
���飺
��ʶ�������������
����Ԫ�أ�ÿ�������еľ�������
Ԫ���±꣺ÿ�����ݵı��
Ԫ�����ͣ�ÿ�����ݵ����ͱ���int double
*/

//��һ��ѭ������8��4��2��1��23��344��12
//��������������ֵ�ĺͼ�ƽ��ֵ
//������Ϸ���Ӽ�����������һ�����ݣ��ж��������Ƿ��������������١�����ʡ�ԣ�
//ð��������
int main()
{

  int num[7]={8,4,2,1,23,344,12};
   //�������
   int jg=0,cs=0;
   double pjz;
   for(cs;cs<7;cs++)
   {
       jg+=num[cs];
   }
   printf("��ֵΪ��%d\n",jg);
            pjz=jg/7;
   printf("ƽ��ֵΪ��%.2lf\n",pjz);


   //��������ð�ݷ�
       int cd,cd1,qjcs=0;
       cd=sizeof(num)/sizeof(num[0]);//ȡ����num���ȳ��Ե������ݳ��ȵõ�������Ԫ������
       for(cd1=0;cd1<cd-1;cd1++)//ѭ��Ԫ�ؼ�1��ð������
        {
       int i=0,c=0;
         for(c;c<cd-1-qjcs;c++)//��������
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
