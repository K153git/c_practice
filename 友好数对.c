//�Ѻ�����
//�ɷ�Ϊ�жϺ�Ѱ��������

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
			printf("%d��%d���Ѻ�����",a,b);
		}
		else
		{
			printf("%d��%d�����Ѻ�����",a,b);
		}
	}
	else
	{
		printf("������󣬲�����λ��"); 
	 } 
	return 0;
 } 


//Ѱ��9-100����Ȼ��������֮����Ѻ�����

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
			printf("��%d����������Ѻ����ԣ�%d��%d\n",num,i,j);
		}
		}
	}
	return 0;
 } 

