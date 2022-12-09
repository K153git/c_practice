#include<stdio.h>
#include<math.h>

//完美数
//一个数除了它本身以外的所有因子相加后等于它本身，如6->1.2.3.6，1+2+3=6；28->1.2.4.7.14.28,1+2+4+7+14=28,接下来寻找它
//同样的循序渐进先尝试判断,如下没问题

int main()
{
	long long num=0,genhao,i,sum=1;
	scanf("%d",&num);
	genhao=sqrt(num);
	printf("%d   %d\n",1,num);
	for(i=2;i<=genhao;i++)
	{
		if(num%i==0)
		{
			sum+=i;
			sum+=num/i;
			printf("%-2d  %2d\n",i,num/i);
		}
	}
	if(genhao*genhao==num)
	{
		sum-=genhao;
	}
	if(sum==num)
	{
		printf("%d是完美数\n",num);
	}
	return 0;
 } 

