#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void dzfdx() //���ַ��ļ����������ں��ֵĲ����ܲ��Ѻá�
{

  printf("������һЩ�ַ�����#�����������ļ���\n");
   printf("�����뱣����ļ�������Ĭ�ϱ�����C���£�\n");
   char wj[15]={};
   char temp;
   scanf("%s",&wj);
   char zjwj[60]={};
   strcat(zjwj,"C:\\");
   strcat(zjwj,wj);
   strcat(zjwj,".txt");
   printf("%s\n",zjwj);
   FILE *fk;

   if((fk=fopen(zjwj,"w"))!=NULL)
   {
       temp=getchar();
       printf("�ļ������ɹ������������֣���#��Ϊ��������\n");
   }
   else
   {
        printf("����ʧ����\n");
        exit(0);
   }


    temp=getchar();
    while(temp!='#')
        {

        fputc(temp,fk);
        temp=getchar();

        }

        fclose(fk);
        printf("д�������\n");
        printf("��ȡ���ԣ�\n");
        if((fk=fopen(zjwj,"r"))!=NULL)
        {
            printf("���ļ��ɹ�����ʼ��ȡ����\n");
        }
        else{
            printf("���ļ�ʧ�ܣ�\n");
        }

        while(!feof(fk))
        {
           temp=fgetc(fk);
           putchar(temp);
        }
        fclose(fk);
}
void dxzfc()//ֱ�Ӷ��ַ�����дʵ����
{
    FILE *mzfk;
    char wj[10]={},temp[30]={};
    printf("�����뱣����ļ�������Ĭ�ϱ�����C���£�\n");
    scanf("%s",&wj);
   char zjwj[30]={};
   strcat(zjwj,"C:\\");
   strcat(zjwj,wj);
   strcat(zjwj,".txt");
   printf("%s\n",zjwj);
   if((mzfk=fopen(zjwj,"w"))!=NULL)
   {
    printf("�ļ������ɹ����������ı���\n");
    scanf("%s",&temp);
    fputs(temp,mzfk);
   }
   else
   {
       printf("����ʧ�ܰ��ס�\n");
       exit(0);
   }



    printf("��ʼ��ȡ���ԣ�\n");
    if((mzfk=fopen(zjwj,"r"))!=NULL)
    {
        printf("¬��ΰţ�ƣ���ȡ�ɹ�,����Ϊ��\n");
        fgets(temp,30,mzfk);
        printf("%s",temp);

    }
    else{
        printf("ʧ��\n");
    }
    fclose(mzfk);
}
int main()
{

  printf("��ѡ�����\n1�����ַ��ļ�����\n2��ֱ���ַ�����д��\n");
  int xz;
    scanf("%d",&xz);
   switch(xz)
   {
    case 1 : dzfdx();break;
    case 2 : dxzfc();break;
    default : exit(0);
   }


    return 0;
}
