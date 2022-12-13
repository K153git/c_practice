#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//随机数游戏猜数字
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
	ret = (rand())%1000+1;//rand的使用需要引头文件<stdlib.h> 
	do
	{
		printf("猜吧:>");
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
			printf("累了累了，别玩了吧\n");
			break;
		}
	 }while(guess!=ret);
}
 
void game()//猜数字核心程序 
{
	int ret,guess;
	ret = (rand())%100+1;//rand的使用需要引头文件<stdlib.h> 
	do
	{
		printf("猜吧:>");
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
			printf("六，要不要再来一局？\n"); 
			menu2(); 
			break;
		}
	 }while(guess!=ret);
}

int main()
{
	printf("猜数字游戏\n");
	int input=0; 
	srand((unsigned int)time(NULL));//time的使用需要引头文件<time.h>   srand的使用需要引头文件<stdlib.h> 
	do
	{
		menu1();
		printf("请选择:>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				printf("游戏开始\n");
				game();
				break;
			case 0:
				printf("您已退出游戏\n");
				break;
			case 2:
				printf("加强版开始\n"); 
				game2(); 
			default:
				printf("输入错误\n");
				break;	
		}	
	}while(input);
	return 0;
}

