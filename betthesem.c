#include<stdio.h>

int main()

{
	int t;
	scanf("%d",&t);
	
	while(t--)
	    {
	    	int x,y,a,b;
	    	scanf("%d%d",&x,&y);
	    	a=(x+y)/2;
	    	b=(x-y)/2;
	    	
	    	if(a<0||b<0)
	    	printf("impossible\n");
	    	
	    	else
	    	printf("%d %d\n",a,b);
	    	
	    	
		}
		return 0;
}
