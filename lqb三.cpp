/*问题描述
对于一个日期，我们可以计算出年份的各个数位上的数字之和，也可以分别计算月和日的各位数字之和。请问从 1900 年 1 月 1 日至 9999 年 12 月 31 日，总共有多少天，年份的数位数字之和等于月的数位数字之和加日的数位数字之和。
例如，2022年11月13日满足要求，因为 2+0+2+2=(1+1)+(1+3) 。
请提交满足条件的日期的总数量。
————————————————*/


#include<stdio.h>
 
bool is_layer(int x,int y,int z)//判断日期是否合法 
{
    if(z==31&&(y==2||y==4||y==6||y==9||y==11)){
        return false;
    }
    if(z==30&&y==2){
        return false;
    }
    if(!(x%400==0)&&!(x%4==0&&x%100!=0)){//x年不是闰年 
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
                if(is_layer(i,j,k)){//日期ijk合法 
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
