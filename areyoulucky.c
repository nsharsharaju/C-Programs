#include<stdio.h>
#include<math.h>

int main()


 {
 	int t,x,y,n,a;
 	long p;
 	
 	scanf("%d",&t);
 	scanf("%d",&n);
 	
 	    while(t--)
 	     {
 	       scanf("%d %d",&x,&y);
			p=(pow(x,y));
			a=p%n;
			printf("%d\n",a);
		  }	
		  return 0;
 }
