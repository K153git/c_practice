#include<stdio.h>

//设计一个函数专门用于将数组进行冒泡排序
//基本模式
//设计一个升序，代表你都会了 


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
		for(m=0;m<sz;m++)
		{
			printf("%d ",arr[m]);//可以把每一趟的结果显示出来 
		}
		printf("\n");
	}
}

int main()
{
	int arr[]={3,5,6,8,1,9,7,2,4};
	int sz=0,i=0;
	sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 } 

//no problem

//优化一下，一旦有序就停止排序 

void bubble_sort(int arr[],int sz)
{
	int i=0,j=0,tmp=0,m=0;
	for(i=0;i<sz-1;i++)
	{
		flag=1;//假设有序 
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag=0;//实际无序 
			}
		}
		for(m=0;m<sz;m++)
		{
			printf("%d ",arr[m]);//可以把每一趟的结果显示出来 
		}
		printf("\n");
		if(flag==1)//确实有序 
		{
			break;
		}
	}
}

//再优化，可以选择升序or降序 


void bubble_sort(int arr[],int sz,int f)
{
	int i=0,j=0,tmp=0,m=0,flag=0;
	for(i=0;i<sz-1;i++)
	{
		flag=1;//假设有序 
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]*(2*f-1)>arr[j+1]*(2*f-1))
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag=0;//实际无序 
			}
		}
		for(m=0;m<sz;m++)
		{
			printf("%d ",arr[m]); 
		}
		printf("\n");
		if(flag==1)
		{
			break;
		}
	}
}

int main()
{
	int arr[]={3,5,6,8,1,9,7,2,4};
	int sz=0,i=0,f=0;
	printf("升序选1，降序选0\n");
	scanf("%d",&f);
	sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz,f);
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 }

