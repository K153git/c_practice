#include<stdio.h>
#include<math.h>

//������
//һ�����������������������������Ӻ������������6->1.2.3.6��1+2+3=6��28->1.2.4.7.14.28,1+2+4+7+14=28,������Ѱ����
//ͬ����ѭ�򽥽��ȳ����ж�,����û����

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
		printf("%d��������\n",num);
	}
	return 0;
 } 

