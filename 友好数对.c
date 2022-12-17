//友好数对
//可分为判断和寻找两部分

int main()
{
	int a,b,oa,ob;
	scanf("%d%d",&a,&b);
	if(9<a&&a<100&&9<b&&b<100)
	{
		oa=(a/10)+(a%10)*10;
		ob=(b/10)+(b%10)*10;
		if(a*b==oa*ob)
		{
			printf("%d和%d是友好数对",a,b);
		}
		else
		{
			printf("%d和%d不是友好数对",a,b);
		}
	}
	else
	{
		printf("输入错误，不是两位数"); 
	 } 
	return 0;
 } 


//寻找9-100（当然不包含）之间的友好数对

int main()
{
	int i,j,oa,ob,num=0;
	for(i=10;i<100;i++)
	{
		for(j=10;j<100;j++)
		{
		oa=(i/10)+(i%10)*10;
		ob=(j/10)+(j%10)*10;
		if(i*j==oa*ob)
		{
			if(i/10==i%10||j/10==j%10)
			{
				continue;
			}
			if(1==ob||j==oa)
			{
				continue;
			}
			num+=1; 
			printf("第%d组有意义的友好数对：%d和%d\n",num,i,j);
		}
		}
	}
	return 0;
 } 

