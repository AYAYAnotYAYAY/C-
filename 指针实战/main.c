#include <stdio.h>
#include <stdlib.h>
//���������ڻع��ϱ�����


void zzsx(int *num,int cd)//����շ���ֵ����zzsxָ����������������ģ�顣����Ϊ�������ĵ�ַ
{
   int w=0;
   for(w;w<cd-1;w++)
   {
       int y=0;
       for(y;y<cd-w-1;y++)
       {
           int jg,temp;
           jg=num[y]<num[y+1];
           if(jg==1)
           {
               temp=num[y];
               num[y]=num[y+1];
               num[y+1]=temp;

           }
       }
   }

}





int main()
{
    printf("Boy next door��\n");
    //����һ�����������Ź�ȥ��CD����������ʱ�İ��顣
    //��һ��һά���顣�ò�ͬ����������򡣣�������Ԫ������Ϊ����ֵʱ����bug��
    int num[]={11452,66547,87412,55,66987,557744,33256,36987,112,147258,1,369852,774521,387420,489};
    /*
    int cd=sizeof(num)/sizeof(num[0]);//�������鳤��
    //��һ�֣�forѭ��ð��������
    printf("����һ����\n");
    int cs=0,temp,xhcs=0;//���������ѭ����������ʱ�жϽ�����temp,�Ѿ�ѭ���Ĵ���
     for(cs;cs<cd-1;cs++)//ѭ������
     {
        int o=0;//ѭ����������
        for(o;o<cd-1-xhcs;o++)//����ѭ��
        {
        temp=num[o]<num[o+1];
        if(temp==1)
            {
            int tempcs,tempcs1;
            tempcs=num[o];
            tempcs1=num[o+1];
            num[o]=tempcs1;
            num[o+1]=tempcs;
            }
        }
        xhcs++;
     }
*/
     zzsx(&num,sizeof(num)/sizeof(num[0]));
     printf("��ӡ���������\n");
        int y=0;
    for(y;y<sizeof(num)/sizeof(num[1]);y++)
    {


        printf("%d\n",num[y]);
    }
    return 0;
}
