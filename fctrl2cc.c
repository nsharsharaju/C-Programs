
 #include<stdio.h>
 
 
long long int factorial(long long int n)
     {   
       long long int x;
     	if(n==0||n==1)
     	return(1);
     	
     	else
     	x=n*factorial(n-1);
     	return(x);	
	 }
 
 
 int main()
 
   {
   	
   long long int t,n,ans;
   	scanf("%lld",&t);
   	
   	while(t--)
   	    {
   	    	
   	     scanf("%lld",&n);
		 ans=factorial(n);
		 printf("%lld\n",ans);
		 
	   }
	    return 0;
   }
