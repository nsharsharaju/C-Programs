#include<stdio.h>
#include<string.h>
      int main()
        
             {
             	int t,l;
             	scanf("%d",&t);
             	char a[1000000];
             	    while(t--)
             	         {
						  scanf("%s",a);
						  l=strlen(a);
						  int i,j;
						  int y;
						  int high=0;
						  for(i=0;i<l;i++) 
						  
						      {
						      	
						      	for(j=i;j<l;j++)
						      	{ 
						      	
                                  if(a[j]=='K')	
								    y++; 					      	
						      	   
								  else
								   y--;
								   
								if(y>high)	
						      		high=y;
						      		
						      	}
						      		
								  }
						      	
						      	printf("%d\n",high);
						      	
							  }
						   
						  
             	          
						  
                return 0;	
			 }
