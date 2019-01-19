#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,m;
    int d1,d2;
    int ans;
    
    scanf("%d",n);
    scanf("%d",d1);
    scanf("%d",m);
    scanf("%d",d2);
    
    while(m--)
        {
        scanf("%d %d",&d1,&d2);
    }
    printf("%d\n",n);
    printf("%d\n",m);
    
    ans = (n*(n-1))/2 - m;
    printf("%d",ans);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

