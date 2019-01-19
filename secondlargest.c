#include<stdio.h>

int main()

         {int t,a[3];
         scanf("%d",&t);
         while(t--)
               {scanf("%d%d%d",&a[0],&a[1],&a[2]);
                 
                  int i=0;
                  int c;
                  for(i=1;i<3;i++){
				  
				  
                     if(a[0]>a[i])
                     {
					 
                     c=a[0];
                     a[0]=a[i];
                     a[i]=c;
                     }
                                 }
                                 
                      if(a[1]>a[2])
                       {
					   
					   c=a[1];
					   a[1]=a[2];
					   a[2]=c;           
                       }
                       printf("%d\n",a[1]);
                       
			   }
			   return 0;
		 }
