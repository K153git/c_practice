#include<stdio.h>

//���һ������ר�����ڽ��������ð������
//����ģʽ
//���һ�����򣬴����㶼���� 


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
			printf("%d ",arr[m]);//���԰�ÿһ�˵Ľ����ʾ���� 
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

//�Ż�һ�£�һ�������ֹͣ���� 

void bubble_sort(int arr[],int sz)
{
	int i=0,j=0,tmp=0,m=0;
	for(i=0;i<sz-1;i++)
	{
		flag=1;//�������� 
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag=0;//ʵ������ 
			}
		}
		for(m=0;m<sz;m++)
		{
			printf("%d ",arr[m]);//���԰�ÿһ�˵Ľ����ʾ���� 
		}
		printf("\n");
		if(flag==1)//ȷʵ���� 
		{
			break;
		}
	}
}

//���Ż�������ѡ������or���� 


void bubble_sort(int arr[],int sz,int f)
{
	int i=0,j=0,tmp=0,m=0,flag=0;
	for(i=0;i<sz-1;i++)
	{
		flag=1;//�������� 
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]*(2*f-1)>arr[j+1]*(2*f-1))
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag=0;//ʵ������ 
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
	printf("����ѡ1������ѡ0\n");
	scanf("%d",&f);
	sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz,f);
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 }

