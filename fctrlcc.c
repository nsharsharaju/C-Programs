 #include<stdio.h>
 
 int main()
     {
      int t,n,ans,n5;
	  scanf("%d",&t);
	  while(t--)
	    {
	    	scanf("%d",&n);
	    	ans=0;
	    	n5=5;
	    	while(n>=n5)
	    	    {
	    	    	ans=ans+(n/n5);
	    	    	n5=n5*5;
				}
	    	 printf("%d\n",ans);
			}	
	 }
 
 
