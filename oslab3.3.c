#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct process
{
	int pid;
	int bt;
	int wt;
	
};

typedef struct process process;

int main()
{
  int n,i,j;
  process temp;
  printf("Enter number of processes you want to enter\n");
  scanf("%d",&n);
  
  int twt=0,tat=0;
  float avg;
  process p[n];
  
  printf("Enter the burst time of the processes\n");
  
  for(i=0;i<n;i++)
  {
  	
  	 p[i].pid = i;
  	 p[i].wt = 0;
  	 scanf("%d",&p[i].bt);
  	
  }
  
  for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-i-1;j++)
      {
      	if(p[j].bt>p[j+1].bt)
      	  {
      	  	temp = p[j];
      	  	p[j] = p[j+1];
      	  	p[j+1] = temp;
			}
	  }
	}
	
	printf("The scheduling will done in the following order\n");
	
	for(i=0;i<n;i++)
	  {
	  	printf("PID : %d Burst Time : %d\n",p[i].pid,p[i].bt);
	  	
	  }
	  
	for(i=0;i<n;i++)
	  {
	  	if(i==0)
	  	{
	  		p[i].wt=0;
		  }
		  
		 else
		   {
		   	 
		   	 p[i].wt = p[i-1].wt+p[i-1].bt;
		   	
			} 
	  	
		}  
		
		for(i=0;i<n;i++)
		{
          tat=p[i].bt+tat;
		  twt=twt+p[i].wt;			
		}
		
		avg=twt/n;
	  
	  for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-i-1;j++)
      {
      	if(p[j].pid>p[j+1].pid)
      	  {
      	  	temp = p[j];
      	  	p[j] = p[j+1];
      	  	p[j+1] = temp;
			}
	  }
	}
	
	printf("\n\n The following are the varies results of Scheduling\n");
	
	for(i=0;i<n;i++)
	  {
	  	printf("PID : %d Burst Time : %d Waiting Time : %d \n",p[i].pid,p[i].bt,p[i].wt);
	  	
	  }
	  
	  printf("The average waiting time is %f",avg);
	
	
	  
	  return 0;
	
}
