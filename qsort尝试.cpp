#include<stdio.h>
#include<stdlib.h>

int cmp(const void * a,const void * b)
{
	int *pa=(int *)a;
	int *pb=(int *)b;
	//return *pa - *pb;//ÉýÐò
	return *pb - *pa;//½µÐò 
}

int main()
{
	int arr[8]={8,5,7,3,6,2,1,4};
	int i=0;
	qsort(arr,8,sizeof(int),cmp);
	for(;i<8;++i)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
