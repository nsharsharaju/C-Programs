#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	
   int n,i;
   
   printf("Enter number of processes you want to give\n");
   scanf("%d",&n);
   
   int bt[n],wt[n],twt=0,tat=0;
   float avg;
   
   printf("Enter the burst time the processes in the order of arrival\n");
   
   for(i=0;i<n;i++)
   {
   	scanf("%d",&bt[i]);
   }
   
   for(i=0;i<n;i++)
   {
   	if(i==0)
   	{
   		wt[i]=0;
	   }
	   
	 else{
	 	wt[i]=bt[i-1]+wt[i-1];
	 }  
   }
   
   for(i=0;i<n;i++)
   {
   	twt=twt+wt[i];
   	tat=tat+bt[i];
   }
   
   avg = twt/n;
   
   
   printf("The waiting time of the processes are following\n");
   
   for(i=0;i<n;i++)
   {
   	   printf("%d ",wt[i]);
   }
   
   printf("\nThe Turn Around Time is %d\n",tat);
   printf("The average waiting time is %f\n",avg);
   
   return 0;
	
}
