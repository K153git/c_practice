#include<stdio.h>

void myfunction()
{
    int year,month,day;
    int i,j,k;
    int sum=0;
    int leap;
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    printf("�����������գ�");
    scanf("%d%d%d",&year,&month,&day);
    for(i=1;i<year;i++)
    {
        if((i%4==0&&i%100!=0)||i%400==0)
            sum=sum+366;
        else
            sum=sum+365;
    }
    for(j=1;j<month;j++)
    {
        if((year%4==0&&year%100!=0)||year%400==0)
            leap=1;
        else
            leap=0;
        sum=sum+a[j]+leap;
    }
    sum=sum+day;
    k=sum%7;
    switch(k)
    {
        case 1:printf("����һ");break;
        case 2:printf("���ڶ�");break;
        case 3:printf("������");break;
        case 4:printf("������");break;
        case 5:printf("������");break;
        case 6:printf("������");break;
        case 0:printf("������");break;
    }
}
int main()
{
	myfunction();
	return 0;
}

