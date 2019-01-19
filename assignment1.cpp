#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod= 1e9 + 7;
vector<string>v;   //vector to store the individuals
int count_digit(int num) //function to count number of digits
{
    int cnt=0;
    while(num != 0)
    {
        num/=2;
        cnt++;
    }
    return cnt;
}
ll power(int n)  //function to fing the power
{
    int ans=1,x=2;
    while(n!=0)
    {
        if(n&1)
            ans*=x;
        x*=x;
        n=n>>1;
    }
    return ans;
}
int decimal(string str) //function to convert the decimal number to binary number
{
    int res=0;
    for(int i=0;i<str.size();i++)
    {
        res+=((int)(str[i]-'0'))*power(str.size()-1-i);
    }
    //cout<<res<<" \n";
   return res;
}
void Generate_binary(int n,int psize)  //function to generate the binary number from decimal number
{
    srand((time(NULL)));
   string str1="";
   for(int j=0;j<psize;j++)
   {
       for(int i=0;i<n;i++)
       {
            str1+=(char)((rand()%2+'0'));
       }
      v.push_back(str1);
      str1="";
   }
}
int value(int num)    //function to calculate the fitness value
{
    return num*num*num;
 
}
 
double pc = 1.0,pm=0.25;      //pc is crossover probability and pm is mutation probability
 
int main()
{
    int s,tmp=0;
    cout<<"Enter the No of Generation\n";
    cin>>s;
    int flg=s;
     int psize=0;
    v.clear();
    cout<<"Enter the population Size\n";
    cin>>psize;
    int L,R;
    cout<<"Enter the value of L and R\n";
    cin>>L>>R;
    R=count_digit(R);
    Generate_binary(R,psize);
    vector<int>mostfit,leastfit;
     int maxx=INT_MIN,minn=INT_MAX;
    while(s--)      //s gives the number of generation value.Running the loop until the s generations
    {
        tmp++;
        vector<int>vec,fitness;
        ll f=0;
        for(int i=0;i<v.size();i++)
            vec.push_back(decimal(v[i]));  //converting from binary to decimal
        int sum=0;
        double avg=0;
        vector<double>fitnessprob;
        for(int i=0;i<psize;i++)
        {
            fitness.push_back( value(vec[i]) );  //calculating the fitness value of every individual
            sum+=value(vec[i]);                  //calculating the sum of the fitness values
        }
        vector<double>expectedprob;
        avg=(1.0*sum)/( (double)psize );         //calculating the average fitness value
       maxx=INT_MIN,minn=INT_MAX;
    for(int i=0;i<psize;i++)
    {
        minn=min(minn,vec[i]);
        maxx=max(maxx,vec[i]);
    }
     mostfit.push_back(maxx);
     leastfit.push_back(minn);
        for(int i=0;i<psize;i++)
        {
            fitnessprob.push_back((1.0*fitness[i])/sum);       //calculating the average fitness probability of every individual
            expectedprob.push_back((1.0*fitness[i])/avg);      //calculating the expected fitness probability of every individual
        }
        vector<int>actual;
        for(int i=0;i<psize;i++)
        {
            actual.push_back( round(expectedprob[i]) );        //calculating the actual number of individual that are to be selected by rounding e f p
        }
        cout<<"Initial Chromosome are  [";
        for(int i=0;i<psize;i++)
        {
            cout<<v[i];
             if(i!=psize-1)
                cout<<" , ";
        }
        cout<<"]\n";             //printing all the data that we are created
       // cout<<"..........................................................................\n";
 
        cout<<"Fitness value are  [";
        for(int i=0;i<psize;i++)
        {
            cout<<fitness[i];
             if(i!=psize-1)
                cout<<" , ";
        }
        cout<<"]\n";
       // cout<<"..........................................................................\n";
         cout<<"Fitness probability are  [";
        for(int i=0;i<psize;i++)
        {
            cout<<fitnessprob[i];
             if(i!=psize-1)
                cout<<" , ";
        }
        cout<<"]\n";
       // cout<<"..........................................................................\n";
         cout<<"Expected value are  [";
        for(int i=0;i<psize;i++)
        {
            cout<<expectedprob[i];
             if(i!=psize-1)
                cout<<" , ";
        }
        cout<<"]\n";
       // cout<<"..........................................................................\n";
         cout<<"Actual value are  [";
        for(int i=0;i<psize;i++)
        {
            cout<<actual[i];
             if(i!=psize-1)
                cout<<" , ";
        }
        cout<<"]\n";
        vector< pair<int,string> >pr;
        for(int i=0;i<psize;i++)
        {
            pr.push_back( make_pair(actual[i],v[i]));
        }
        sort(pr.begin(),pr.end());
        v.clear();
        vec.clear();
        actual.clear();
        fitness.clear();              //we got the actual count, so we are clearing all the other data.
        fitnessprob.clear();
        expectedprob.clear();
        for(int i=0;i<psize;i++)
        {
            while(pr[i].first--)
            {
                v.push_back(pr[i].second);
                if(v.size()==psize)
                    break;                //selecting the individuals based on the count
            }
            if(v.size()==psize)
                break;
        }
        pr.clear();
       // cout<<"..........................................................................\n";
        cout<<"Mating pool after "<<tmp<<" generation are [";
        for(int i=0;i<psize;i++)
        {
            cout<<v[i];
            if(i!=psize-1)
                cout<<" , ";
        }
 
        cout<<"]";
     //cout<<"..........................................................................\n";
     for(int i=1;i<psize;i+=2)
     {
         int p=rand()%psize;
         double xx = (rand()%100+1)/100.00;
         if(xx<pc){
            string ss1 = v[i-1].substr(p);           //applying the single point crossover
            string ss2 = v[i].substr(p);
            v[i-1] = v[i-1].substr(0,p)+ss2;
            v[i] = v[i].substr(0,p)+ss1;
         }
     }
     cout<<"After Applying single point Cross over\n";
     for(int i=0;i<psize;i++)
     {
         cout<<v[i];
         if(i!=psize-1)
            cout<<" , ";
     }
     cout<<endl;
     cout<<"After Applying Single Point mutation\n";
     for(int i=0;i<psize;i++)
     {
         int p=rand()%psize;
         double xx = (rand()%100+1)/100.00;
         string c=v[i];
         if(xx<pm){                        //applying the single point mutation
            c[p]='1'-c[p]+'0';
            v[i]=c;
         }
     }
 
      for(int i=0;i<psize;i++)
      {
          cout<<v[i];
         if(i!=psize-1)
            cout<<" , ";
      }
      cout<<endl;
 
    }
    cout<<"Most fitter value\n";
    for(int i=0;i<flg;i++)
      {
          cout<<mostfit[i];
         if(i!=flg-1)
            cout<<" , ";
      }
      cout<<endl;
      cout<<"least fitter value\n";
    for(int i=0;i<flg;i++)
      {
          cout<<leastfit[i];
         if(i!=flg-1)
            cout<<" , ";
      }
      cout<<endl;
 
    return 0;
}
