#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//�������Ϸ������
void menu1()
{
	printf("##############################\n");
	printf("######1.play     0.quit#######\n");
	printf("##############################\n");
}

void menu2()
{
	printf("##############################\n");
	printf("#1.play    2.enhance   0.quit#\n");
	printf("##############################\n");
}

void game2()
{
	int ret,guess;
	ret = (rand())%1000+1;//rand��ʹ����Ҫ��ͷ�ļ�<stdlib.h> 
	do
	{
		printf("�°�:>");
		scanf("%d",&guess);
		if(guess<ret)
		{
			printf("too low\n");
		}
		if(guess>ret)
		{
			printf("too big\n");
		}
		if(guess==ret)
		{
			printf("�������ˣ������˰�\n");
			break;
		}
	 }while(guess!=ret);
}
 
void game()//�����ֺ��ĳ��� 
{
	int ret,guess;
	ret = (rand())%100+1;//rand��ʹ����Ҫ��ͷ�ļ�<stdlib.h> 
	do
	{
		printf("�°�:>");
		scanf("%d",&guess);
		if(guess<ret)
		{
			printf("too low\n");
		}
		if(guess>ret)
		{
			printf("too big\n");
		}
		if(guess==ret)
		{
			printf("����Ҫ��Ҫ����һ�֣�\n"); 
			menu2(); 
			break;
		}
	 }while(guess!=ret);
}

int main()
{
	printf("��������Ϸ\n");
	int input=0; 
	srand((unsigned int)time(NULL));//time��ʹ����Ҫ��ͷ�ļ�<time.h>   srand��ʹ����Ҫ��ͷ�ļ�<stdlib.h> 
	do
	{
		menu1();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				printf("��Ϸ��ʼ\n");
				game();
				break;
			case 0:
				printf("�����˳���Ϸ\n");
				break;
			case 2:
				printf("��ǿ�濪ʼ\n"); 
				game2(); 
			default:
				printf("�������\n");
				break;	
		}	
	}while(input);
	return 0;
}

