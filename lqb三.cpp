/*��������
����һ�����ڣ����ǿ��Լ������ݵĸ�����λ�ϵ�����֮�ͣ�Ҳ���Էֱ�����º��յĸ�λ����֮�͡����ʴ� 1900 �� 1 �� 1 ���� 9999 �� 12 �� 31 �գ��ܹ��ж����죬��ݵ���λ����֮�͵����µ���λ����֮�ͼ��յ���λ����֮�͡�
���磬2022��11��13������Ҫ����Ϊ 2+0+2+2=(1+1)+(1+3) ��
���ύ�������������ڵ���������
��������������������������������*/


#include<stdio.h>
 
bool is_layer(int x,int y,int z)//�ж������Ƿ�Ϸ� 
{
    if(z==31&&(y==2||y==4||y==6||y==9||y==11)){
        return false;
    }
    if(z==30&&y==2){
        return false;
    }
    if(!(x%400==0)&&!(x%4==0&&x%100!=0)){//x�겻������ 
        if(y==2&&z==29){
            return false;
        }
    }
    return true;
}
 
int get_sum(int n)
{
    int sum=0;
    while(n>0)
    {
    sum+=(n%10);
    n/=10;
    }
    return sum;
}
 
int main()
{
    int i,j,k=0;
    int count=0;
    for(i=1900;i<10000;++i){
        for(j=1;j<13;++j){
            for(k=1;k<32;++k){
                if(is_layer(i,j,k)){//����ijk�Ϸ� 
                    if(get_sum(i)==get_sum(j)+get_sum(k)){
                        count++;
                    }
                }
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
