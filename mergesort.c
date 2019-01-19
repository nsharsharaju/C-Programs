 #include<stdio.h>
 
 void mergesort(int a[],int temp[],int left,int right)
               {
               	
               	int mid;
               	if(right>left)
               	  {
               	  	mergesort(a,temp,left,mid);
               	  	mergesort(a,temp,mid+1,right);
               	  	merge(a,temp,left,mid+1,right);
               	  	
			      }
			   }
			
 void merge(int a[],int temp[],int left,int mid,int right)
      
	          {
	          	int i,left_end,size,temp_pos;
	          	left_end=mid-1;
	          	temp_pos=left;
	          	size=right-left+1;
	          	
                while((left<=left_end)&&(mid<=right))
				   	          	
	          	
							 }			   
			   
