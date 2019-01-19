 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 
 
 struct point {
    int x, y;
};


double getdistance(struct point a, struct point b)
{
    double distance;
    distance = sqrt((a.x - b.x) * (a.x - b.x) + (a.y-b.y) *(a.y-b.y));
    return distance;
}
 
 int main()
    {
    	int t,r;
    	double r1,r2,r3;
    	struct point a,b,c;
    	scanf("%d",&t);
    	while(t--)
    	    {
    	     scanf("%d",&r);
    	     scanf("%d %d", &a.x, &a.y);
    	     scanf("%d %d", &b.x, &b.y);
    	     scanf("%d %d", &c.x, &c.y);
    	     
    	     r1=getdistance(a,b);
    	     r2=getdistance(b,c);
    	     r3=getdistance(c,a);
    	     
    	     if(r1<=r&&r2<=r&&r3<=r)
    	     printf("yes\n");
    	     
    	     else if((r1<=r&&r2<=r)||(r2<=r&&r3<=r)||(r3<=r&&r1<=r))
    	     printf("yes\n");
    	     
    	     else 
    	     printf("no\n");
			 	
			}
			
    	return 0;
    	
	}
 
