#include<stdio.h>
#include<string.h>

int main()

   {
   	long long int t,n,i,count,m;
   	
   	
   	scanf("%lld",&t);
   	
   	      while(t--)
   	      {  
			
   	      	scanf("%lld",&n);
   	      	
   	      	char a[n],b[n];
   	      	long long int c[n+1];
   	      	
   	      	scanf("%s",a);
   	      	scanf("%s",b);
   	      	
   	      	for(i=0;i<n+1;i++)
   	      	   {
   	      	   	scanf("%lld",&c[i]);
					}
					
				 count=0;	
					
			for(i=0;i<n;i++)
			   {
			   	if(a[i]==b[i])
			   {
				   	count=count+1;
			   }
			   }
			   if(count<n)
			{
			   m=c[count];
			   for(i=0;i<=count;i++)
			      {
			      	if(c[i]>=m)
			      	m=c[i];
				  }
				  printf("%lld\n",m);
			}
			
			else
			printf("%lld\n",c[n]);
			   
			 }
   	return 0;
   }
