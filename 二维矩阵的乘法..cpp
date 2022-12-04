#include<stdio.h>

int main()
{
int arr1[2][2];
int arr2[2][2];
int arr3[2][2];
int a,b,c,d,e,f,g,h,m,n,x,y,i,j;
scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
arr1[0][0]=a;
arr1[0][1]=b;
arr1[1][0]=c;
arr1[1][1]=d;
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d   ",arr1[i][j]);
	}
	printf("\n");
}
printf("\n");
arr2[0][0]=e;
arr2[0][1]=f;
arr2[1][0]=g;
arr2[1][1]=h;
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d   ",arr2[i][j]);
	}
	printf("\n");
}
printf("上方两二维矩阵相乘得到矩阵\n");
m=a*e+c*f;
n=b*e+d*f;
x=a*g+c*h;
y=b*g+d*h;

arr3[0][0]=m;
arr3[0][1]=n;
arr3[1][0]=x;
arr3[1][1]=y;
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d   ",arr3[i][j]);
	}
	printf("\n");
}
	return 0;
}
















