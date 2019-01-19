#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


int main()
{
	int t,i;
	scanf("%d",&t);
	
	while(t--)
		{
			int n;
			scanf("%d",&n);
			
			int l[n],r[n];
			
			for(i=0;i<n;i++)
				{
					scanf("%d",&l[i]);
				}
				
			for(i=0;i<n;i++)
				{
					scanf("%d",&r[i]);
				}
				
			for(i=0;i<n;i++)
				{
					l[i]=l[i]*r[i];
				}
				
			for(i=0;i<n-1;i++)
		    	{
		    		
					}	
				
		}
		
	return 0;
}
