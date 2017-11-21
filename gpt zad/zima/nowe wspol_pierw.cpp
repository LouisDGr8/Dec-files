#include <iostream>
#include <vector>
using namespace std;

vector <int> vecto;

int main()
{
	//ios_base::sync_with_stdio(0);
	//cin.tie(0);
	cout<<" :wykonane\n";
	
	const int sizem=0;
	cout<<sizem;
	bool zlozone[80000];

	for(long long i=2;i<80000;i++)
	{
		cout<<i<<" :wykonane\n";
		if(zlozone[i]==false)
		{
			vecto.push_back(i);
			
			for(long long j=i*i;j<=80000;j=j+i)
			{
				zlozone[j]=true;
				cout<<j<<": true\n";
			}
		}
	}
	
	long long n;
	cin>>n;
	
	long long iloczyn=1;
	
	long long liczba;
	while(n--)
	{
		iloczyn=1;
		
		cin>>liczba;
		
		if(liczba==1)
		{
			cout<<"1\n";
		}
		else if(liczba==2)
		{
			cout<<"2\n";
		}
		else
		{
			for(int i=0;i<vecto.size();i++)
			{	
				while(liczba%vecto[i]==0)
				{
					cout<<vecto[i]<<" ";
					liczba=liczba/vecto[i];
					
					iloczyn=iloczyn*vecto[i];
					if(iloczyn==liczba)
					{
						goto apple;
					}
				}
			}
			apple:
			cout<<"\n";
		}
	}
}
