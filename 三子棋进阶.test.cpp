#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#define ROW 3//��ѡ�������� ������ 
#define COL 3//��ѡ�������� ������ 

void menu()
{
	printf("#############################\n");
	printf("##  1.�˻�  2.��ս  0.quit ##\n");
	printf("#############################\n");
}

void Initboard(char board[ROW][COL],int row,int col)//��ʼ������ 
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
void Displayboard(char board[ROW][COL],int row,int col)//��ӡ���� 
{
	int i,j;
	for(i=0;i<row;i++)//��ӡrow��
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

void Player1Move(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("���1���壺\n");
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
			printf("�������ѱ�ռ��\n");
		}
	}
	else
	{
		printf("����Ƿ�������������\n");
	}
	}
}

void Player2Move(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("���2���壺\n");
	while(1)
	{ 
	scanf("%d%d",&x,&y);
	if(x>=1 && x<=row && y>=1 && y<=row)
	{
		if(board[x-1][y-1]==' ')
		{
			board[x-1][y-1]='#';
			break;
		}
		else
		{
			printf("�������ѱ�ռ��\n");
		}
	}
	else
	{
		printf("����Ƿ�������������\n");
	}
	}
}

void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("�������壺\n");
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



void auto_game()//���ĳ��� 
{
	int ret=0;
	char board[ROW][COL]={0};
	Initboard(board,ROW,COL);
	Displayboard(board,ROW,COL);
	//��ʽʵ�ִ���
	while(1)
	{
	Player1Move(board,ROW,COL);//������� 
	Displayboard(board,ROW,COL);
	ret=IsWin(board,ROW,COL);
	if(ret != 'C')
	{
		break;
	}
	ComputerMove(board,ROW,COL);//��������
	Displayboard(board,ROW,COL);
	ret=IsWin(board,ROW,COL);
	if(ret != 'C')
	{
		break;
	} 
	}
	
	if(ret=='*')
	{
		printf("���Ӯ\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

char human_game()
{
	int out=0;
	char board1[ROW][COL]={0};
	Initboard(board1,ROW,COL);
	Displayboard(board1,ROW,COL);
	//��ʽʵ�ִ���
	while(1)
	{
	Player1Move(board1,ROW,COL);//������� 
	Displayboard(board1,ROW,COL);
	out=IsWin(board1,ROW,COL);
	if(out != 'C')
	{
		break;
	}
	Player2Move(board1,ROW,COL);//��������
	Displayboard(board1,ROW,COL);
	out=IsWin(board1,ROW,COL);
	if(out != 'C')
	{
		break;
	} 
	}
	
	if(out=='*')
	{
		printf("���1Ӯ\n");
	}
	else if(out=='#')
	{
		printf("���2Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

/*
*���Ӯ
#����Ӯ
Qƽ��
C���� 
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
				printf("��Ϸ��ʼ\n");
				auto_game(); 
				break;
			case 2:
				printf("��ҶԾֿ�ʼ\n");
				human_game();
				break; 
			case 0:
				printf("�����˳�\n");
				break;
			default:
				printf("�����������������\n");
				break;
		}
	}while(input);
	return 0;
 } 





















































































































