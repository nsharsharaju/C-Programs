#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<math.h>
#include<string.h>
#include<semaphore.h>

#define FSIZE 4  //frame size
#define PSIZE 4  //page size
#define MSIZE 1024  //physical memory size

   int p_size[4];
   int b_time[4];
   int a_time[4];

   int pframe[256];  //256 is the number of frames
   
     


void * process1()
 {  
    printf("Hey,You are in p1");
    int i;
    int j=0;
    int size,atime,bursttime,no_pages;
    size = p_size[0];
    atime = b_time[0];
    bursttime = a_time[0];
    no_pages = (size/4)+1;
    int ptable[no_pages];

    for(i=0;i<no_pages;i++)
     {
        while(pframe[j]!=0)  //allocating the pages to page frames
            {
               ptable[i]=j;
               pframe[j]=0;
                }
     j=0;
     }

      for(i=0;i<no_pages;i++)
      {
        pframe[ptable[i]] = 0; //deallocating the pages from page frames
      }
    
    pthread_exit(NULL);
    
}

void * process2()
 {  
     printf("Hey,You are in p2");
    int i; 
    int j=0;
    int size,atime,bursttime,no_pages;
    size = p_size[1];
    atime = b_time[1];
    bursttime = a_time[1];
    no_pages = (size/4)+1;
    int ptable[no_pages];

      for(i=0;i<no_pages;i++)
     {
        while(pframe[j]!=0)        //allocating the pages to page frames
            {
               ptable[i]=j;
               pframe[j]=0;
                }
     j=0;
     }

     for(i=0;i<no_pages;i++)
      {                        //deallocating the pages from page frames
        pframe[ptable[i]] = 0;
      }
    
    pthread_exit(NULL);
}

void * process3()
 {  
     printf("Hey,You are in p3");
    int i;
    int j=0;
    int size,atime,bursttime,no_pages;
    size = p_size[2];
    atime = b_time[2];
    bursttime = a_time[2];
    no_pages = (size/4)+1;
    int ptable[no_pages];

     for(i=0;i<no_pages;i++)
     {
        while(pframe[j]!=0)
            {                  //allocating the pages to page frames
               ptable[i]=j;
               pframe[j]=0;
                }
     j=0;
     }

   for(i=0;i<no_pages;i++)
      {                        //deallocating the pages from page frames
        pframe[ptable[i]] = 0;
      }


  
    
  pthread_exit(NULL);  
    
}

void * process4()
 {  
     printf("Hey,You are in p4");
    int i;
    int j=0;
    int size,atime,bursttime,no_pages;
    size = p_size[3];
    atime = b_time[3];
    bursttime = a_time[3];
    no_pages = (size/4)+1;
    int ptable[no_pages];

    for(i=0;i<no_pages;i++)
     {
        while(pframe[j]!=0) //allocating pages to page frames
            {
               ptable[i]=j;
               pframe[j]=0;
                }
     j=0;
     }
  while(bursttime--)
   {
     }

  for(i=0;i<no_pages;i++)
      {
        pframe[ptable[i]] = 0;//deallocating pages from page frames
      }


  pthread_exit(NULL);
    
}

int main(){

     int i;

     for(i=0;i<256;i++)
        {
           pframe[i] = 1;
            }
     

  

   for(i=0;i<4;i++)  //Taking the properties of the process from the user
   {
     printf("Enter the size of %d process\n",i+1);
     scanf("%d\n",&p_size[i]);
      
     printf("Enter the burst time of the %d process\n",i+1);
     scanf("%d\n",&b_time[i]);

     printf("Enter the arrival time of the %d process\n",i+1);
     scanf("%d\n",&a_time[i]);
  }
   printf("Taking of the values is completed");
   pthread_t p1,p2,p3,p4;

   pthread_create(&p1,NULL,process1,NULL);
   pthread_create(&p2,NULL,process2,NULL);//creating the threads
   pthread_create(&p3,NULL,process3,NULL);
   pthread_create(&p4,NULL,process4,NULL);

   pthread_join(p1,NULL);
   pthread_join(p2,NULL);
   pthread_join(p3,NULL);
   pthread_join(p4,NULL);

      for(i=0;i<256;i++)
        {
         printf("%d",pframe[i]);//printing the memory ram
         }


return 0;

}
