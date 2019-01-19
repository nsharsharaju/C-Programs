#include<stdio.h>

int main()

       {
       	
       	int a[10],i,j,c;
       	printf("Enter the ten numbers you want to sort\n");
       	
       	for(i=0;i<10;i++)
       	   {
       	   	scanf("%d",&a[i]);
			  }
       	
       	   
       	   for(i=0;i<10;i++)
       	       {
       	         for(j=i+1;j<10;j++)
       	         	if(a[i]>a[j+1])
       	         	  {
       	         	  	
       	         	  	c=a[i];
       	         	  	a[i]=a[j+1];
       	         	  	a[j+1]=c;
						  }
       	         	
					
       	
       	     }
       	
       	printf("The numbers after been sorting are following\n");
       	    for(i=0;i<10;i++)
       	       {
       	       	printf("%d ",a[i]);
				  }
       	
       	return 0;
	   }
