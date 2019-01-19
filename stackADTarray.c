 #include<stdio.h>
 
  struct stack
       {
       	int top;
       	int size;
       	int *a;
	   };
	   
  typedef struct stack stack;
 
 void createstack(stack *stk,int u)
     {
       	stk->top=-1;
	   	stk->size=u;
		stk->a=(int *)malloc(sizeof(stack));	
	 }
 
 void push(stack *stk,int ele)
          {
          	if(stk->top==stk->size-1)
          	printf("Overflow\n");
          	
          	else
          	  {
          	  	stk->top=stk->top+1;
          	  	*(stk->a+stk->top)=ele;
				}
		  }
		  
 void pop(stack *stk)
        {
        	if(stk->top==-1)
        	printf("Underflow\n");
				  
			else
			{
			  stk->top=stk->top-1;
			 printf("The element poped is %d\n",*(stk->a+stk->top+1));
			 	
			}	  
	}
	
int topele(stack *stk)
        {
        	if(stk->top==-1)
        	printf("Underflow\n");
				  
			else
			{
			 return(*(stk->a+stk->top));
			}	  
	}
	
	
void isfull(stack *stk)

    {
     if(stk->top==stk->size-1)
	   printf("The stack is full\n");
	   
	 else
	 printf("The  stack is not full\n"); 	
	}


void isempty(stack *stk)

        {
         if(stk->top==-1)
		 printf("The stack is empty\n");
		 
		 else
		 printf("The stack is not empty\n");
		}

	
 int main()
    {
     printf("**************Enter to the program of stack***************************\n");
     int o,e;
     stack s1,*s;
     s=&s1;
     printf("Enter the size of stack\n");
     scanf("%d",&e);
     createstack(s,e);
     while(o!=-999)
        {
         printf("1-push 2-pop 3-top element 4-isfull 5-isempty -999-exit\n");
         scanf("%d",&o);
         switch(o)
             {
              case 1 :
			    {
			     printf("Element?\n");
			     scanf("%d",&e);
			     push(s,e);
			     break;
					}
			  case 2 :
			      {
			       pop(s);
			       break;
							  }	
			  case 3 :
			      {
			      	e=topele(s);
			      	printf("Top element is %d\n",e);
			      	break;
											}
			  case 4 :
			       {
			       	isfull(s);
			       	break;
											 }
			  case 5 :
			      {
			      	isempty(s);
			      	break;
											}
			  case -999 :
			       {
			       	return 0;
											 }				  		
			 }
		}
     
     return 0;
	}
			  	  
