#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("�����������������������\n");
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
    //ѡ�����򣬴�n���������ҵ���С���Ǹ����ŵ���λ��Ȼ���ٴ�ʣ�µ�n-1�����ݼ����Ƚ�
    for(i;i<o-1;i++)//���ѭ�������ƱȽϴ���
    {
            for(j=i;j<o;j++)//���ѭ�������αȽ�����
            {
               if(num1[i]>num1[j])
               {
                   z=num1[i];

                   num1[i]=num1[j];
                   num1[j]=z;

               }

            }



    }

    for(i=0;i<o;i++)//������
    {
       printf("%d  ",num1[i]);
    }
    return 0;
}
