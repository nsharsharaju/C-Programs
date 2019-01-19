#include<stdio.h>


int main()

   {   printf("Please enter the size of the matrix\n");
      int n;
	  scanf("%d",&n);
   	 int a[n][n];
   	 
   	 int i,j;
   	 
   	    for(i=0;i<n;i++)
   	        {
   	       for(j=0;j<n;j++)
   	          {
				if(i<j)
				  {
				    a[i][j]=i*j;
				  }
				  else if(i==j)
				        {
				        	
				        a[i][j]=0;	
				        	
						 } 
   	            
   	                   else
						  {
						  	a[i][j]=i+j;
						  	
						   } 
   	
   	           }
   	       }
   	
   	        printf("The required matrix\n");
   	        
   	       for(i=0;i<n;i++)
   	          {for(j=0;j<n;j++)
   	              {
   	              	printf("%d ",a[i][j]);
   	              	
					 }
   	                   printf("\n");
				 }
   	       
   	       return 0;
   	
   }
