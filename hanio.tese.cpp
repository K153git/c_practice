#include<stdio.h>

//��ŵ������(����ݹ�)

int count=0;
void move(char aa,char bb)
{
	count+=1;
	printf("   %c-->%c\n",aa,bb);
}

void hanio(int n,char A,char B,char C)//nԲ������A��ʼ����B��������C�յ��� 
{
	if(1==n)//����һ��Բ����Ҫ�ƶ� 
	{
		move(A,C); 
	}
	else
	{
		hanio(n-1,A,C,B);//n-1����ʱ������ 
		move(A,C);
		hanio(n-1,B,A,C);//n-1��Բ���ƶ���������C 
	}
}
int main()
{
	int num;
	char a,b,c;
	scanf("%d",&num);
	hanio(num,'A','B','C');
	printf("   ���ƶ�%d\n",count);
	return 0;
 } 

