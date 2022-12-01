#include<stdio.h>

int main()
{
	int i,j,m,t,key;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	scanf("%d",&key);
	for(i=0,j=9,t=1;i<=j;t++)
	{
		m=(i+j)/2;
		printf("第%d次查找的为arr[%d]=%d\n",t,m,arr[m]);
		if(arr[m]==key)
		{
		printf("找到了，下标为%d\n",m);
		break;
		}
		else if(key>arr[m])
		i=m+1;
		else
		j=m-1; 
	}
	if(i>j)
	    printf("找不到\n");
	return 0;
}

