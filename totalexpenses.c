#include<stdio.h>

int main()

      {
      	
      	long long int t;
      	scanf("%lld",&t);
        long long q,p;
      	float e;
      	while(t--)
      	     {
      	     	scanf("%lld %lld",&q,&p);
      	     	e=q*p;
      	     	if(q<=1000)
      	     	printf("%.6f\n",e);
      	     	else
      	     	   {
      	     	   	e=e-(e*.1);
      	     	   	printf("%.6f\n",e);
					  }
			   }
      	    return 0;	
	  }



