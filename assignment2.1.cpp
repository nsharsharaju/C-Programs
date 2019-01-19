 #include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n,u;
	vector<double> sp,dp(100),mating_pool;
	list<double> rnd;
//	cout<<"Enter the no of fitness values to be inserted\n";
	cin>>n;
	double fitness[n+1];
	double sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>fitness[i];
		sum+=fitness[i];
	}
//	cout<<"Enter the number of children---offsprings to be produced\n";
	cin>>u;
	dp[0]=0;
	for(int i=0;i<n;i++)
	{
		sp.push_back(fitness[i]/sum);
		dp[i]=dp[i-1]+sp[i-1];
	}

	srand(time(NULL));
	for(int i=0;i<=n;i++)
	{
		double x = (rand()%100+1)/100.00;
		rnd.push_back(x);
	}
	rnd.sort();
	int j=0;
	int c_member = 1;
	while(c_member<=u)
	{
		double rr = (rand()%100+1)/100.00;
		double q = rnd.front();
		rnd.pop_front();
		while(q>dp[j])
		{
			j++;
		}
		mating_pool.push_back(fitness[j]);
		c_member++;
	}	
	
	for(int i=0;i<mating_pool.size();i++)
	{
		cout<<mating_pool[i]<<" ";
	}
	cout<<endl;
	return 0;
}
