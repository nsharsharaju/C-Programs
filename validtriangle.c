#include<stdio.h>

int main()
    {int t;
     int a,b,c;
     scanf("%d",&t);
     
         while(t--)
            {   scanf("%d%d%d",&a,&b,&c);
            
                if((a+b+c==180)&&(a!=0)&&(b!=0)&&(c!=0))
                  printf("YES\n");
                  
                else
				   printf("NO\n"); 
	      	}
	    return 0;
	}
