#include<stdio.h>
#include<string.h>
	int main()
	{  
	  /*********Begin*********/
	  char s[1000];
      int i=0;
      int a=0,b=0,c=0,d=0;
      gets(s);
      //scanf("%[^\n]",s); 
      for(i=0;i<strlen(s);++i)
      {
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
            a++;
        else if(s[i]>='0'&&s[i]<='9')
            b++;
        else if(s[i]==' ')
            c++;
        else
            d++;
      }
      printf("%d %d %d %d",a,b,c,d);
	  
	  /*********End**********/ 
       return 0;
	}
