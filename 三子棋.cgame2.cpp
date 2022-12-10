#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#define ROW 3//自选棋盘行数 
#define COL 3//自选棋盘列数 

void menu()
{
	printf("############################\n");
	printf("####   1.play   0.quit  ####\n");
	printf("############################\n");
}

void Initboard(char board[ROW][COL],int row,int col)//初始化棋盘 
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			board[i][j]=' ';
		}
	}
}

/*   |   |   00
  ---|---|---01
     |   |   10
  ---|---|---11
     |   |   20
	         break 
*/
void Displayboard(char board[ROW][COL],int row,int col)//打印棋盘 
{
	int i,j;
	for(i=0;i<row;i++)//打印row组
	{
		for(j=0;j<col-1;j++)
		{
			printf(" %c |",board[i][j]);
		}
		printf(" %c \n",board[i][j]);
		if(i<row-1)
		{
		for(j=0;j<col-1;j++)
		{
			printf("---|");
		}
			printf("---\n");
		}
	 } 
}

void PlayerMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("玩家走棋：\n");
	while(1)
	{ 
	scanf("%d%d",&x,&y);
	if(x>=1 && x<=row && y>=1 && y<=row)
	{
		if(board[x-1][y-1]==' ')
		{
			board[x-1][y-1]='*';
			break;
		}
		else
		{
			printf("该坐标已被占用\n");
		}
	}
	else
	{
		printf("输入非法，请重新输入\n");
	}
	}
}

void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("电脑走棋：\n");
	while(1)
	{
		x=rand()%row;
		y=rand()%col;
		if(board[x][y]==' ')
		{
			board[x][y]='#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL],int row,int col)
 {
 	int i=0;
 	for(i=0;i<row;i++)
 	{
 		if(board[i][0]==board[i][1] && board[i][0]==board[i][2] && board[i][1]!=' ')
 		{
 			return board[i][0]; 
		 }
	 }
	for(i=0;i<col;i++)
	{
		if(board[0][i]==board[1][i] && board[0][i]==board[2][i] && board[1][i]!=' ')
		{
			return board[0][i];
		}
	 }
	if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')
	{
		return board[1][1];
	 } 
	if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[1][1]!=' ')
	{
		return board[1][1];
	 } 
	 if(1==IsFull(board,ROW,COL))
	 {
	 	return 'Q';
	 }
	 else
	 {
	 	return 'C';
	 }
 }

void game()//核心程序 
{
	int ret=0;
	char board[ROW][COL]={0};
	Initboard(board,ROW,COL);
	Displayboard(board,ROW,COL);
	//正式实现代码
	while(1)
	{
	PlayerMove(board,ROW,COL);//玩家走棋 
	Displayboard(board,ROW,COL);
	ret=IsWin(board,ROW,COL);
	if(ret != 'C')
	{
		break;
	}
	ComputerMove(board,ROW,COL);//电脑走棋
	Displayboard(board,ROW,COL);
	ret=IsWin(board,ROW,COL);
	if(ret != 'C')
	{
		break;
	} 
	}
	
	if(ret=='*')
	{
		printf("玩家赢\n");
	}
	else if(ret=='#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

/*
*玩家赢
#电脑赢
Q平局
C继续 
*/

int main()
{
	srand((unsigned int)time(NULL));
	int input=0;
	do
	{
	menu();
	scanf("%d",&input);
		switch(input)
		{
			case 1:
				printf("游戏开始\n");
				game(); 
				break;
			case 0:
				printf("您已退出\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
		}
	}while(input);
	return 0;
 } 





















































































































