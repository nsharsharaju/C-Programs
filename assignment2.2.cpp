 // Tournament selection //The Individual with highest fitness value will be considered as best individual
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<double> vec; //vector to store the selected individuals
int fitvalue(int x) //A function to calculate the fitness value.In this program it is not of much use.
{
	return x*x*x;
}

int selecter(int a[],int k,int n) //here k is the tournament size
{
	int best=0;
	for(int i=1;i<=k;i++)
	{
		int ind = a[rand()%n+1];//randomly seelcting individuals from the population
		if(best==0 || fitvalue(ind)>fitvalue(best))
			best = ind;
	}
	return best;
}

int main()
{
	int n,k,s;
	int a[10000];
	cout<<"Enter the no of offspring to be inserted\n";
	cin>>n;//here n is the population size
	
	cout<<"Enter the values one by one\n";
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Enter the tournament Size\n";
	cin>>k; //k is the tournament size

    cout<<"Enter the number of individuals to be selected\n";
    cin>>s; //s is the number of individuals to be selected
    
	for(int i=0;i<s;i++)
	{
		int tr = selecter(a,k,n);
		vec.push_back(tr);
	}
	
	cout<<"The following are the individuals which are selected\n";
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<endl;
	}
	cout<<endl;
}
