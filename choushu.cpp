
#include<stdio.h> 

//�����ۣ��������ж���Ѱ�ң�Ѱ������֪ǰ�᣺����������1690��
//definition��ֻ��������2��3��5�����ֽг�������12=2*2*3��15=3*5��24=2*2*2*3���ǳ������涨1Ҳ�ǳ�����
//�жϲ���

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
		printf("%d�ǳ���\n",num);
	}
	else
	{
		printf("%d���ǳ���\n",num);
	}
	return 0;
 } 


