#include<stdio.h>

int main()

   {
   	 int t,n;
   	 scanf("%d",&t);
   	 while(t--)
   	     {   
   	        int sum=0;
   	        scanf("%d",&n);
			do
			{
			 sum=sum+(n%10);
			 n=n/10;
				
				   }while(n!=0);	
   	     	printf("%d\n",sum);
   	     	
			}
			return 0;
   }
