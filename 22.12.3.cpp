
#include<stdio.h>

//���[a,b]֮���ж��ٸ�������λ��Ϊ5�ı���:������򵥵���λ������� 

int getsum(int x)
{
	int a,b,sum;
	a=x/10;
	b=x%10;
	sum=a+b;
	return sum;
}

int main()
{
	int i,u,v,total=0;//c������һ�����Ͷ���ʱû�и���ֵ��ôĬ��ֵΪ1 
	scanf("%d%d",&u,&v);
	i=u;
	printf("[%d,%d]֮�����λ��Ϊ��ı��������ǣ�\n",u,v);
	while(i<=v){
		if(getsum(i)%5==0){
			total+=1;
			printf("%d\n",i);
		}
		i++;
	}
	printf("��%d��\n",total);
	return 0;
}

