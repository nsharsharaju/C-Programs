#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


long long int alpha,beta;

int main()

{
   long long int T,t;
	scanf("%lld",&T);
	
	while(T--)
	{    alpha = 0;
	     beta = 0;
		scanf("%lld",&t);
		void sutra(t);
		printf("%lld %lld\n",alpha,beta);
	}
	return 0;
}

void sutra(long long int t)

{
	if(t<=0)
	alpha = (((alpha%10000007)+1)%10000007);
	
	else if(t==1)
    beta=(((beta%10000007)+1)%10000007);
	
	else
	{
		sutra(t-1);
		sutra(t-2);
		sutra(t-3);
	}
	
	
	
}
