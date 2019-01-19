 #include<stdio.h>
 #include<string.h>
 
 int main()
 
  {
  	int c,j;
  	char s[110];
  	int l,t,i,m,e;
  	scanf("%d",&c);
  	 while(c--)
  	   {t=0;
  	    l=0;
  	    i=0;
  	    m=0;
  	    e=0;
  	   	scanf("%s",s);
  	   	
  	   	 for(j=0;s[j]!='\0';j++)
  	   	   {
  	   	   	if(s[j]=='L')
  	   	   	   l++;
  	   	   	if(s[j]=='T') 
				t++;
			if(s[j]=='I') 
				i++;
			if(s[j]=='M') 
				m++;
			if(s[j]=='E') 
				e++;				  
		   }
		if(strlen(s)==9)
		   {		
			if(l==2&&t==2&&i==2&&m==2&&e==1)
			printf("YES\n");
			else
			printf("NO\n");
		 }
		 else
		    {
		    if(l>=2&&t>=2&&i>=2&&m>=2&&e>=2)
			printf("YES\n");
			else
			printf("NO\n");		
			}
		 }
  	return 0;
  }
