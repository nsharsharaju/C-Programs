 #include<stdio.h>
 #include<string.h>
 #include<math.h>
 #include<stdlib.h>
 
 struct node
   {
   	int info;
   	struct node *left;
   	struct node *right;
   };
   
   typedef struct node node;
   
   node *createnode(int x)
     {
     	node *temp;
     	temp=(node *)malloc(sizeof(node));
     	temp->info=x;
     	temp->left=NULL;
     	temp->right=NULL;
     	return temp;
	 }
    
    node *findmax(node *r)
       {
       	while(r->right==NULL)
       	 {r=r->right;
			}
		return r;	
	   }
  node *insert(int info,node* r)
       {
       	if(r==NULL)
       	return(createnode(info));
       	
       	if(info<r->info)
       	r->left=insert(info,r->left);
       	
       	else
     	r->right=insert(info,r->right);
	   }
	   
 node *delect(int info,node* r)
     {
     	if(r==NULL)
     	  return(NULL);
     	  
     	if(info<r->info)
		 r->left=delect(info,r->left);
		 
	   	else if(info>r->info)
		 r->right=delect(info,r->right);
	    			   
	     else
	        {
	         if(r->left==NULL)
	           {
	           	node *temp=r->right;
	           	free(r);
	           	return(temp);
			   }
			   
			  else if(r->right==NULL)
			      {
			      	node *temp=r->left;
			      	free(r);
			      	return(temp);
				   } 
	         
			 else{
			 	node *max=findmax(r->left);
			 	r->info=max->info;
			 	delect(max->info,max);
			 }
			 	
			}
	}
  void inorder(node *r)
       {
       	if(r==NULL)
       	  return;
       	  
       	
		 inorder(r->left);
		 printf("%d ",r->info);
		 inorder(r->right);	  
	   }
	   
	void preorder(node *r)
	   {
	   	if(r==NULL)
       	  return;
       	  
       	 printf("%d ",r->info);
		 preorder(r->left);
		 preorder(r->right);	
		  } 
		  
	void postorder(node *r)
	  {
		if(r==NULL)
       	  return;
       	  
		 postorder(r->left);
		 postorder(r->right);
		 printf("%d ",r->info);	
		 	  }	    
	        
   int search(int info,node *r)
      {
      	if(r==NULL)
      	 return(0);
      	 
      	 if(info==r->info)
      	 return(1);
      	 
      	 if(info<r->info)
      	 return(search(info,r->left));
      	 
      	 else
      	 return(search(info,r->right));
				  }	  
				  
	int size(node *r)
	    {
	     if(r==NULL)	
		  return 0;
		  
		  else
		  return(size(r->left)+1+size(r->right));
	    }
	        
	     int main()
		 
		 {
		 	node *root=NULL;
		 	int a,b;
		 	printf("Welcome to the program of BST\n");	
		 	int op=10;
		 	while(op!=0)
		 	  {
		 	  	printf("(1)Insert(2)Delect(3)inorder(4)Preorder(5)Postorder(6)Search(7)Size(0)exit\n");
		 	  	scanf("%d",&op);
		 	  	
		 	  	if(op==1)
		 	  	{printf("Info?\n");
		 	  	 scanf("%d",&a);
		 	  	 root=insert(a,root);
				   }
				   
			   else if(op==2)
				 {printf("Enter the element you want to delect\n");
				  scanf("%d",&a);
				  root=delect(a,root);
				   }  
		 	  	
		 	   else	if(op==3)
		 	  	{printf("The inorder traversal\n");
		 	  	 inorder(root);
		 	  	 printf("%d\n");
				   }
				   
				else if(op==4)
				  {
				  	printf("The preorder traversal\n");
				  	preorder(root);
				  	printf("%d\n");
					}  
					
				else if(op==5)
				   {
				   	printf("The postorder traversal\n");
				   	postorder(root);
				   	printf("%d\n");
					   }	
				   
				else if(op==6)
				 {printf("Enter the element you want to search for\n");
				  scanf("%d",&a);
				  b=search(a,root);
				  
				   if(b==1)
				   printf("The element you searched exists in the list\n");
				   
				   else
				   printf("The element you entered does't exists in the list\n");
				  
					   } 
					   
				 else if(op==7)
				  {
				  	printf("The size of the tree is %d\n",size(root));
							  }	   
							  
				 else{
			   	printf("Please check your option\n");
			   }			   	
			   }
			   
			   
		 	return 0;
		 }
		 
		    
