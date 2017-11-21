#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;

	int od[n];
	int d[n];
    long long maks_d=0;

	for(long long i=0;i<n;i++)
	{
		cin>>od[i];
		cin>>d[i];
		
		if(d[i]>maks_d)
		{
			maks_d=d[i];
		}
	}
	//cout<<maks_d;
	
	bool zlozone[maks_d+1];
	
	for(int i=2;i<=maks_d;i++)
	{
		//cout<<i<<" :wykonane\n";
		if(zlozone[i]==false)
		{
			for(int j=i*i;j<=maks_d;j=j+i)
			{
				zlozone[j]=true;
				//cout<<j<<": true\n";
			}
		}
	}
	
	long long aa;
	long long bb;
	long long wyniki=0;
	for(long long i=0;i<n;i++)
	{
		wyniki=0;
		aa=od[i];
		if(aa<2)
		{
			aa=2;
		}
		bb=d[i];
		
		for(aa;aa<=bb;aa++)
		{
			if(zlozone[aa]==false)
			{
				//cout<<aa<<"\n";
				wyniki++;
			}
		}
		cout<<wyniki<<"\n";
	}
	
	
}
