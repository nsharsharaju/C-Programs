#include<stdio.h>
 
int main()

{
	int t,n,i,count,sets;
	scanf("%d",&t);
	while(t--)
	     {
	      scanf("%d",&n);
		  int a[n];	
		  for(i=0;i<n;i++)
		     {
		     	scanf("%d",&a[i]);
			 }
			count=0;sets=0; 
	     for(i=0;i<n-1;i++)
		    {
		    	if(a[i]<=a[i+1])
		    	  count=count+1;
		    	  
		    	  else
		    	  {
		    	  	sets=sets+((count*(count+1))/2);
		    	  	count=0;
		      }
		    	  
					 }	
			sets=sets+((count*(count+1))/2)+n;		 	 
		    printf("%d\n",sets);
		 }

return 0;	
}
