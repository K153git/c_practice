#include<stdio.h>
#include<math.h>

int getlen(int x)//获得x的位数 
{
	int num=0;
	while((x+9)/10>0)
	{
		num+=1;
		x/=10;
	}
	return num;	
}

void bubble_sort(int arr[],int sz)
{
	int i=0,j=0,tmp=0,m=0;
	for(i=0;i<sz-1;i++)
	{
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}

int MIN(int arr[100],int len)
{
	int min=0,lll;
	lll=len;
	for(;len>0;len--)
	{
		min+=arr[len-1]*pow(10,lll-len);
	}
	return min;
}

int MAX(int arr[100],int len)
{
	int max=0,lll;
	lll=len;
	for(;len>0;len--)
	{
		max+=arr[lll-len]*pow(10,lll-len);
	}
	return max;
}

void Initarr(int arr[100],long x,int len)//x是需要拆分的数字，len是位数，用自定义函数getlen获得 
{
	int i=0;
	for(i=0;x>0;i++)
	{
		arr[len-1-i]=x%10;
		x/=10;
	}
}

int main()
{
	int n=0,max=10000,min=0,guess=0;
	scanf("%d",&n);
	int arr[100]={0};
	while(n!=guess)
	{
		guess=max-min;
		Initarr(arr,n,getlen(n));
		bubble_sort(arr,getlen(n));
		max=MAX(arr,getlen(n));
		min=MIN(arr,getlen(n));
		printf("%d\n",max-min);
		n=max-min;
	}
	 
	return 0;
}












 















