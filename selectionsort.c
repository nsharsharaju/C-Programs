#include<stdio.h>

int main()

 {   int i,j,min,a[10],temp;
 
 	
 	for(i=0;i<10;i++)
 	   {
 	   	scanf("%d",&a[i]);
		}
   for(i=0;i<10;i++)
   {
   	 min = i;
   	 for(j=i;j<10;j++)
   	 { 
   	     if(a[min]>=a[j])
   	     min =  j;
		}
		temp = a[i];
		a[i]=a[min];
		a[min] = temp;
   }
	      
     for(i=0;i<10;i++)
 	   {
 	   	printf("%d ",a[i]);
		}
    return 0; 
 }
