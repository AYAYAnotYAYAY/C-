#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void dzfdx() //单字符文件操作，对于汉字的操作很不友好。
{

  printf("请输入一些字符，按#结束并保存文件。\n");
   printf("请输入保存的文件名：（默认保存在C盘下）\n");
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
       printf("文件创建成功，请输入文字：以#作为结束符。\n");
   }
   else
   {
        printf("好像失败了\n");
        exit(0);
   }


    temp=getchar();
    while(temp!='#')
        {

        fputc(temp,fk);
        temp=getchar();

        }

        fclose(fk);
        printf("写入结束！\n");
        printf("读取测试！\n");
        if((fk=fopen(zjwj,"r"))!=NULL)
        {
            printf("打开文件成功！开始读取内容\n");
        }
        else{
            printf("打开文件失败！\n");
        }

        while(!feof(fk))
        {
           temp=fgetc(fk);
           putchar(temp);
        }
        fclose(fk);
}
void dxzfc()//直接对字符串读写实例。
{
    FILE *mzfk;
    char wj[10]={},temp[30]={};
    printf("请输入保存的文件名：（默认保存在C盘下）\n");
    scanf("%s",&wj);
   char zjwj[30]={};
   strcat(zjwj,"C:\\");
   strcat(zjwj,wj);
   strcat(zjwj,".txt");
   printf("%s\n",zjwj);
   if((mzfk=fopen(zjwj,"w"))!=NULL)
   {
    printf("文件创建成功，请输入文本：\n");
    scanf("%s",&temp);
    fputs(temp,mzfk);
   }
   else
   {
       printf("创建失败啊亲。\n");
       exit(0);
   }



    printf("开始读取测试：\n");
    if((mzfk=fopen(zjwj,"r"))!=NULL)
    {
        printf("卢本伟牛逼，读取成功,内容为：\n");
        fgets(temp,30,mzfk);
        printf("%s",temp);

    }
    else{
        printf("失败\n");
    }
    fclose(mzfk);
}
int main()
{

  printf("请选择程序：\n1、单字符文件操作\n2、直接字符串读写。\n");
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
