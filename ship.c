#include<stdio.h>

int main()

      {
      	
      	int t;
      	scanf("%d",&t);
      	
      	        while(t--)
      	             {
      	                char f,ch;
      	               	scanf("%c",&f);
      	             	scanf("%c",&ch);
      	             	
      	             	if(ch=='B'||ch=='b')
      	             	printf("BattleShip\n");
      	             	
      	             else if(ch=='C'||ch=='c')
      	             	printf("Cruiser\n");
      	             	
      	             else if(ch=='F'||ch=='f')
      	             	printf("Frigate\n");
      	             	
      	             else if(ch=='D'||ch=='d')
      	             	printf("Destroyer\n");
      	             	
      	             	;
					   }
      	
      	return 0;
      	
	  }
