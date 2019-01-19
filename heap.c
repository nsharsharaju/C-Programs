 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #include<math.h>
 #include<time.h>
 
 
 
 void max_heapify(int *b,int i)
       {
       	int l,r,c;
       	int max=i;
       	l=2*i;
       	r=2*i+1;
       	
       	if(l<=3&&b[l]>b[max])
       	max=l;
       	
       	if(r<=3&&b[r]>b[max])
       	max=r;
       	
       	
       	if(i!=max)
       	{
       	 c=b[i];
		 b[i]=b[max];
		 b[max]=c;		
       	max_heapify(b,max);
	   }
}
	   
 
 
 int main()
 
   {
   	
   	int k;
   	int a[4];
   	printf("Enter the elements and we heapify them\n");
   	
   	
   	for(k=1;k<4;k++)
   	   {
   	   	scanf("%d",&a[k]);
		  }
	
   	  	max_heapify(a,1);
		 
		 
		for(k=1;k<4;k++)
   	   {
   	   	printf("%d ",a[k]);
		  }	 
   	return 0;
   }
 
