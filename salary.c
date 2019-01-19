#include<stdio.h>

      int main()
              {
              	
              	
              	int t;
              	float s;
              	scanf("%d",&t);
              	while(t--)
              	     {
					   scanf("%d",&s);
              	     
              	    if(s<1500){
              	      	float full;
              	      	full=s+(s/10)+(s*.9);
              	      	printf("%f\n",full);
						}
              	       
              	    else{
              	        	
              	        float full1;
						  full1=s+1500+(s*.98);
						  printf("%f\n",full1);
              	        	
						  }
              	     
              	     
					   }
              	return 0;
			  }
