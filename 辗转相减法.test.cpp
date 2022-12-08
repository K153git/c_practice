#include<stdio.h>

//辗转相减法

int MIN(int x,int y)
{
	if(x<y)
	{
		return x;
	}
	return y;
}
int MAX(int x,int y)
{
	if(x<y)
	{
		return y;
	}
	return x;
}
int main()
{
	int a,b,c=1,max,min;
	scanf("%d%d",&a,&b);
	max=MAX(a,b);
	min=MIN(a,b);
	while(c!=0)
	{
		c=max-min;                      
		max=MAX(min,c);
		min=MIN(min,c);			
	}
	printf("最大公约数是:%d",max);
	return 0;
}
