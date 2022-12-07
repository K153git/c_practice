#include<stdio.h>

//汉诺塔问题(经典递归)

int count=0;
void move(char aa,char bb)
{
	count+=1;
	printf("   %c-->%c\n",aa,bb);
}

void hanio(int n,char A,char B,char C)//n圆盘数，A起始柱，B工具柱，C终点柱 
{
	if(1==n)//仅有一个圆盘需要移动 
	{
		move(A,C); 
	}
	else
	{
		hanio(n-1,A,C,B);//n-1块暂时当整体 
		move(A,C);
		hanio(n-1,B,A,C);//n-1块圆盘移动到经操作C 
	}
}
int main()
{
	int num;
	char a,b,c;
	scanf("%d",&num);
	hanio(num,'A','B','C');
	printf("   共移动%d\n",count);
	return 0;
 } 

