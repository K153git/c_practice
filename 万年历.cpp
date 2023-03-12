#include<stdio.h>

void myfunction()
{
    int year,month,day;
    int i,j,k;
    int sum=0;
    int leap;
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    printf("请输入年月日：");
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
        case 1:printf("星期一");break;
        case 2:printf("星期二");break;
        case 3:printf("星期三");break;
        case 4:printf("星期四");break;
        case 5:printf("星期五");break;
        case 6:printf("星期六");break;
        case 0:printf("星期日");break;
    }
}
int main()
{
	myfunction();
	return 0;
}

