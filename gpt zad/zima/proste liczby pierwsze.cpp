#include <iostream>
using namespace std;
bool zlozone [10000000];
int  main()
{
	ios::sync_with_stdio(0);
	
	long long n;
	cin>>n;
	
	for(int i = 2;i*i<=n;i++)
	{
		if(zlozone[i]==false)
		{
			for(int j =i*i;j<=n;j=j+i)
			{
				zlozone[j]=true;
			}
		}
	}
	
	for(int i=2;i<=n;i++)
	{
		if(zlozone[i]==false)
		{
			cout<<i<<"\n";
		}
	}
}
