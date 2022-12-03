
#include<stdio.h>

//求出[a,b]之间有多少个数的数位和为5的倍数:先做最简单的两位数的情况 

int getsum(int x)
{
	int a,b,sum;
	a=x/10;
	b=x%10;
	sum=a+b;
	return sum;
}

int main()
{
	int i,u,v,total=0;//c语言中一个整型定义时没有赋初值那么默认值为1 
	scanf("%d%d",&u,&v);
	i=u;
	printf("[%d,%d]之间的数位和为五的倍数的数是：\n",u,v);
	while(i<=v){
		if(getsum(i)%5==0){
			total+=1;
			printf("%d\n",i);
		}
		i++;
	}
	printf("共%d个\n",total);
	return 0;
}

