#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

 int judice(int x)
{
    if(x < 0)
        return false;
    else
    {
        long int a, b = 0;
        a = x;
        while(a != 0)
        {
            b = b * 10 + a % 10;
            a = a / 10;
        }
        if(x == b)
            return 1;
        else
            return 0;
	}
}
int main()
{
    for(int t=1;t<257;++t){
        if(1==judice(t*t)){
            printf("%d\n",t);
        }
    }
    return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
