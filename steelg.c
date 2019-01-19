#include <stdio.h>

int main(void) {
	
	  int t,h,f;
	  float c;
	  scanf("%d",&t);
	  while(t--)
	       {
	       	scanf("%d%f%d",&h,&c,&f);
	       	if((h>50)&&(c<0.7)&&(f>5600))
	       	printf("10\n");
	       	else if((h>50)&&(c<0.7)&&(f<5600))
	       	printf("9\n");
	       	else if((h<50)&&(c<0.7)&&(f>5600))
	       	printf("8\n");
	       	else if((h>50)&&(c>0.7)&&(f>5600))
	       	printf("7\n");
	       	else  if((h>50)&&(c>0.7)&&(f<5600))||((h<50)&&(c<0.7)&&(f<5600))||((h<50)&&(c>0.7)&&(f>5600))
	       	printf("6\n");
	       	else if((h<50)&&(c>0.7)&&(f<5600))
	       	printf("5\n");
	       }
	return 0;
}

