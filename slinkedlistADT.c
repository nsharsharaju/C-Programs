#include<stdio.h>
#include<string.h>
#include<stdlib.h>


 struct node{
 	int info;
 	struct node *next;
 };
 
 
 typedef struct node node;
 
 node *getnode()//function to create a  new node
  {
   node *p;
   p=(node *)malloc(sizeof(node));
   return p;
  }
  
 node *insertnodebeg(int x,node *h)//function to insert a node at the begining of the linked list
  
   {
   	node *p=getnode();
   	p->info=x;
   	if(h==NULL)
   	  {p->next=NULL;
   	   h=p;
   	   return h;
		 }
	 else
	     {p->next=h;
	      h=p;
	      return h;
		 }
   	 	
   }
   
     void insertnodeend(int x,node *h)//insert a node at the end of the  linked list
       
           {
           	
           	node *temp=h;
           	  if(temp==NULL)
           	  printf("SORRY,You can't insert first node at the end\n");
           	else{
           	while(temp->next!=NULL)
           	    {
           	    	temp=temp->next;
				   }
           	   node *p=getnode();
               p->next=NULL;
               p->info=x;
               temp->next=p;
           }
		   }
		   
	void delectnodeend(node *h)//delect a node at the end of the linked list
	     {   if(h==NULL)
	         printf("SORRY,linked list is empty\n");
	         else
	         {
	     	node *temp=h;
	     	node *t;
	     	while(temp->next!=NULL)
	            {t=temp;
				temp=temp->next;
	     	       
				   }
				   free(t->next);
				   t->next=NULL;
			}
		 }
	
	  
	  node *delectnodebeg(node *h)//delect a node at the begining of the linked list
	      { 
	        if(h==NULL)
	         printf("SORRY,linked list is empty\n");
	
		   else{
		   node* temp=h;
	       temp=h;
	       h=h->next;
	       free(temp);
	       return h;
	          }
		  }
  
    void display(node *h)//traverse function(to display the linked list in the normal order)
        {
        
         node *temp=h;
         printf("Linked List - ");
         while(temp!=NULL){
         	
         	printf("%d ",temp->info);
         	
         	temp=temp->next;
		 }
		 printf("\n");	
		}
      
    
    
    int main()
    
       {
       	printf("************Welcome to the program of the linked list****************\n");
       	    int o,v;
       	    node *head=NULL;
       	       	while(o!=6){
					  

       	printf("1-Insert At Begining\n2-Insert At End\n3-Display the linkedlist\n4-Delect The First Node\n5-Delect The Last Node\n6-Exit\n");
       	  	scanf("%d",&o);
       	   		  
       	    switch(o)
       	     {
				
       
       	 case 1 :
       	 {
       	 	printf("Info ?\n");
       	 	scanf("%d",&v);
       	 	head=insertnodebeg(v,head);
       	 	break;//please never forget to put the break function in switch,other all the below cases will be executed
			}
       	 case 2 :
       	 	{printf("Info ?\n");
       	 	 scanf("%d",&v);
       	 	 insertnodeend(v,head);
       	 	 break;//this break is very important
				}
       	
       	case 3 :
			 {
	   display(head);
	    break;//this break is very very important
	     }
	   
	    case 4 :{
	    head=delectnodebeg(head);
			break;//this break is very very very important
		}
	    
	   
	    case 5 :{
	    	delectnodeend(head);
			break;
		}
	     
	   
           }
       }
       	return 0;
	   }   
