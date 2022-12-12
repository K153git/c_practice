
#include<stdio.h> 

//新数论，丑数的判断与寻找（寻找有已知前提：丑数不超过1690）
//definition：只有质因子2，3，5的数字叫丑数，如12=2*2*3，15=3*5，24=2*2*2*3都是丑数，规定1也是丑数。
//判断部分

int main()
{
	int n,i,num,flag=0;
	int fac[3]={2,3,5};
	scanf("%d",&n);
	num=n;
	while(n>1)
	{
		for(i=0;i<3;i++)
		{
			if(n%fac[i]==0)
			{
				n/=fac[i];
				flag=1;
				break;
			}
		}
		if(n%fac[0]!=0&&n%fac[1]!=0&&n%fac[2]!=0&&n!=1)
		{
			flag=0;
			break;
		}
	}
	if(flag==1||num==1)
	{
		printf("%d是丑数\n",num);
	}
	else
	{
		printf("%d不是丑数\n",num);
	}
	return 0;
 } 


