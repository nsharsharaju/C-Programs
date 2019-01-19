 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #include<math.h>
 
 
 int main()
 {
 	
 	int t,a,b;
 	scanf("%d",&t);
 	
 	while(t--)
 	{
 	  scanf("%d %d",&a,&b);
	   
	   if(a<b)
	   {
	   	printf("<\n");
		   }
		   
	   if(a>b)
	   {
	   	printf(">\n");
				  }	
				  
	   if(a==b)
	   {
	   	printf("=\n");
							}			     	
	 }
	 return 0;
 }
