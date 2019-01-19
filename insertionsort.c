#include<stdio.h>

int main()

  {
  	  int n,i,j,y,m;
  	
  	printf("       Welcome to the insertion sort Algorithm\n");	
  	printf("Enter number of numbers you want to sort\n");
  	scanf("%d",&n);
  	
  	int a[n];
  	
  	for(i=0;i<n;i++)
  	   {
  	   	scanf("%d",&a[i]);
		 }
		 
    for(i=1;i<n;i++)
	{   
	    m=a[i]; 
	  
	  	j=i-1;
	  while(j>=0&&a[j]>m)
	  {
	  	a[j+1]=a[j];
	  	a[j]=m;
	  	j--;
	  	
	  }
		
		}
			 	 
  	
  
  	for(i=0;i<n;i++)
  	   {
  	   	printf("%d ",a[i]);
		 }
  	
  	return 0;
  	
  }
