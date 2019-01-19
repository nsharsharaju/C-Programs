 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<string.h>
 
 
 int main()
 {
 	char a[1001];
 	char b[1001];
 	int t,l1,l2,i;
 	scanf("%d",&t);
 	while(t--)
 	{
 		scanf("%s",a);
 		scanf("%s",b);
 		l1 = strlen(a);
 		l2 = strlen(b);
 	    for(i=0;i<=l2;i++)
 	    {
 	       	
		 }
 	
	 }
 	
 	return 0;
 }
 
 
 int palindrone(char c[])
 {
 	char b[1001];
 	strcpy(b,c);
 	strrev(b);
 	
 	if(strcmp(c,b)==0)
 	return 1;
 	
 	else
 	return 0; 
 }
