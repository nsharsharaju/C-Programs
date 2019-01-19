#include<stdio.h>
#include<stdlib.h>

int main()
{
 long long int t,s,i,j,p,is,js,count;
  scanf("%lld",&t);
  while(t--)
  {
  	scanf("%lld",&s);
  	int a[s][s];
  	for(i=0;i<s;i++)
  	{
  		for(j=0;j<s;j++)
  		{
  			scanf("%lld",&a[i][j]);
  			if(a[i][j]==1)
  			{
  				is=i;
  				js=j;
			  }
		  }
	  }
	     
	   count = 0;
	  for(p=2;p<=(s*s);p++)
	  { 
	  	for(i=0;i<s;i++)
	  	{
	  	  for(j=0;j<s;j++)
	  	  {
	  	  	if(p==a[i][j])
	  	  	{   count = count + abs(is-i) + abs(js-j);
	  	  		is = i;
	  	  		js = j;
				}
			
			}
		}
	  }
	  printf("%lld\n",count);
	  }	
}


