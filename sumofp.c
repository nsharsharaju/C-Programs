#include<stdio.h>
int  main() 
{ 

int rem,rev,p,q,k,t; 
int sum;
scanf("%d",&t);
  while(t--)
  {
  	sum=0;
scanf("%d %d",&p,&q); 
while(p<=q) 
{ 

k=p; 
rem=0; 
rev=0; 
while(k>0) 
{ 
rem=k%10; 
k=k/10; 
rev=(rev*10)+rem; 
} 
if(p==rev) 
{ 
sum=sum+p;} 
p=p+1; 
} 
printf("%d\n",sum);
}
return 0;

} 
  
