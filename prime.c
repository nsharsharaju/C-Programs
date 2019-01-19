#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()

{   
    int a,i;
	printf("Enter the number for which you want to find whether it is a prime number or not\n");
	scanf("%d",&a);
	
	if(a<=1)
	{
	
	printf("The prime number is not defined on the number you entered\n"); return 0;
}
	else if(a==2)
	{
	
	printf("The number you entered is a prime number\n"); return ;
}
	else 
	{   i=2;
		while(i<a){
			if((a%i)==0)
			printf("The number you entered is not prime\n"); return 0;
			i++;
		}	
		
		
		}
	
	
	printf("The number you entered is prime\n");
return 0;	
}
