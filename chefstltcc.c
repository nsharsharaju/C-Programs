#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


int main()
{
	
	int t,l,i,max,min;
	char a[101],b[101];
	scanf("%d",&t);
	while(t--)
	{   
	     max=0;
	     min=0;
		scanf("%s %s",a,b);
		
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]=='?'||b[i]=='?')
			{
				max++;
			}
			
			
		else {
		if(a[i]!=b[i])
			{
				max++; min++;
			}
		}
			
		}
	
	   printf("%d %d\n",min,max);	
	}
	return 0;	
}
