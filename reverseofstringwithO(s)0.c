#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
	{   
		int a[7];
		int i,j;
		printf("Please enter your string of size 6");
	    scanf("%s",a);
	    i = 5;j = 0;
	    while(i>=j)
	    {
	    a[i] = a[i]+a[j];
		a[j] = a[i]-a[j];
		a[i] = a[i]-a[j];
		i--;
		j++;
    	}
    	printf("%s",a);
		return 0;
	}
