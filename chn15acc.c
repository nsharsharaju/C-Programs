 #include<stdio.h>
 
 int main()
 
 {
 	int t,n,k,i,count;
 	scanf("%d",&t);
 	
 	while(t--)
 	
 	   {
 	   	count=0;
 	   	scanf("%d %d",&n,&k);
 	   	int a[n];
 	   	
 	   	for(i=0;i<n;i++)
 	   	   {
 	   	   	scanf("%d",&a[i]);
			   }
		for(i=0;i<n;i++)
		    {
		      a[i]=a[i]+k;	
				   }
	    for(i=0;i<n;i++)
		   {  
			 if((a[i]%7)==0)
			  count=count+1;
	    	}
	     printf("%d\n",count);	
		}
		return 0;	
 }
