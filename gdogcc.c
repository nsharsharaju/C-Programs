#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main()

 {
 	int t,n,k,i,p,pc;
 	scanf("%d",&t);
 	
 	while(t--)
 	{
 		pc=0;
 		scanf("%d %d",&n,&k);
 		for(i=2;i<=k;i++)
 		{
 			p=(n%i);
 			if(p>=pc)
 			pc=p;
		 }
		 
		 printf("%d\n",pc);
	 }
	 return 0;
 }
