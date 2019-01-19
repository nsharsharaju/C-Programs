#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()

{
	 int w;
	 float b;
	
	scanf("%d %f",&w,&b);
	
	if((w%5)!=0)
	printf("%.2f",b);
	
	else if((w+.5)>b)
	printf("%.2f",b);
    
	
	else
	{
		b=b-w-.5;
		printf("%.2f",b);
	}
	
  return 0;	
}
