// ��ջ������.cpp: �������̨Ӧ�ó������ڵ㡣
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct yuansu { char data; double num; yuansu *next; yuansu *father; };//����һ������ṹ���������ͣ�������ջ����

struct yuansu *pop(yuansu *R)//��ջ������next
	{
	yuansu *temp;
	temp = R->father;
	free(R);
	return temp;
	}

struct yuansu *push( yuansu *zz, char a,double i)//��ջ�������µ�ַ
	{
	yuansu *temp;
	temp= (yuansu*)malloc(sizeof(struct yuansu));
	zz->next = temp;
	temp->father = zz;
	temp->next = NULL;
	temp->num = i;
	temp->data = a;
	return temp;

	}

double sum(yuansu *S)//�ṩ��׺���ʽ�����������ս��
{
	yuansu *H;//����ʱ�õ��ļ���ջ
	H= (yuansu*)malloc(sizeof(struct yuansu));//��ʼ����һ����ַ
	while (S!=NULL)
	{
		if (S->data==' ')//�������Ϊ�ո�������Ϊ����
		{
			H = push(H,' ',S->num);//�����������ջ
		}
		else//����Ϊ�����
		{
			double A, B;//��������ʱ����
			switch (S->data)
			{
			case '+': B = H->num; H = pop(H); A = H->num; H = pop(H); H = push(H, ' ', A + B); break;
			case '-':B = H->num; H = pop(H); A = H->num; H = pop(H); H = push(H, ' ', A - B); break;
			case '*':B = H->num; H = pop(H); A = H->num; H = pop(H); H = push(H, ' ', A * B); break;
			case '/':B = H->num; H = pop(H); A = H->num; H = pop(H); H = push(H, ' ', A / B); break;
			case '^':B = H->num; H = pop(H); A = H->num; H = pop(H); H = push(H, ' ', pow(A, B)); break;
			}

		}
		S = S->next;
	}

	return H->num;
}

int panduan(yuansu *S,char suanshi)//�Ƚ��ṩ�������еķ���������������������Ƿ�Ӧ��ֱ����ջ��Ӧ��ֱ����ջ����1����Ӧ�÷���0,�����������������ֱ��������Ϊֹ����2.
{

	if (suanshi=='+'||suanshi=='-')//�����������Ϊ�Ӽ�
	{
			if (S->data=='*'||S->data=='^'||S->data=='/')//����Ӽ�ǰ���ǳ˳�
			{
				return 0;
			}
			else if (S->data=='(')//����Ӽ�ǰ����������
			{
				return 1;
			}
			else
			{
				return 0;
			}
	}
	else if (suanshi == '*' || suanshi == '/'||suanshi=='^')//��������ǳ˳��η�
	{
		if (S->data == '+' || S->data == '-' || S->data == '(')//����˳�ǰ���ǼӼ�������
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (suanshi==')')
	{
		return 2;
	}
	else if (suanshi=='(')//����������ţ�ֱ����ջ
	{
		return 1;
	}
	else
	{
		printf("δ֪���󣡣�-�ж�\n");
	}
}

struct yuansu *zhuanhuan(char suanshi[])//�ṩ�ַ������͵���׺���ʽת��Ϊ˫������ṹ�ĺ�׺���ʽ
{
	yuansu *F, *S,*r;
	double h = 0;
	F = (yuansu*)malloc(sizeof(struct yuansu));//��ʽ��׺���ʽ����
	r = F;
	F->father = NULL;
	F->next = NULL;
	S = (yuansu*)malloc(sizeof(struct yuansu));//������Ŷ�ջ����
	S->father = NULL;
	while (*suanshi != '\0')//���������ַ���
	{
		if (*suanshi >= '0'&&*suanshi <= '9')//��������������F����
		{
			int d = 0;
			h += (*suanshi - '0');
			suanshi++;
			while (*suanshi == '.' || *suanshi >= '0'&&*suanshi <= '9')
			{
				if (*suanshi == '.'&&d == 0)
				{
					d ++;
				}
				else
				{
					if (d == 0)
					{
						h = h * 10 + (*suanshi - '0');
					}
					else if (d > 0)
					{
						h += (*suanshi - '0') / (pow(10, d));
						d++;
					}
				}
				suanshi++;
			}
			F = push(F, ' ', h);
			h = 0,d=0;
		}
		else//�������������F����
		{
			if (S->father==NULL)
			{

				S = push(S, *suanshi, 0);
			}
			else
			{
				int jg;
				jg = panduan(S, *suanshi);
				if (jg == 1)
				{

					S = push(S, *suanshi, 0);
				}
				else if (jg == 0)
				{

						F = push(F, S->data, 0);
						S = pop(S);
						S = push(S, *suanshi, 0);
				}
				else if (jg == 2)
				{

					for (;S->data!='(';)
					{

						F = push(F, S->data, 0);
						S = pop(S);
					}

					S = pop(S);
				}
				else
				{
					printf("δ֪���󣡣���\n");
				}
			}
			suanshi++;
		}

	}
	while (S->father!=NULL)
	{
		F=push(F,S->data,0);
		S = pop(S);
	}
	return r;
}





int main()
{
	printf("��ѧ����������������ʽ������exit�˳���\n");
	char cm[40];
	scanf("%s", &cm);
	for(;cm!="exit";)
	{
		yuansu *p, *q;
		p = zhuanhuan(cm);
		p = p->next;
		q = p;
		printf("ת��Ϊ��׺���ʽ��");
		while (p != NULL)
		{
			if (p->data == ' ')
			{
				printf("%.4lf", p->num);
				p = p->next;
			}
			else
			{
				printf("%c", p->data);
				p = p->next;
			}
		}

		printf("\n��������%lf\n", sum(q));
		scanf("%s", &cm);
	}
    return 0;
}

