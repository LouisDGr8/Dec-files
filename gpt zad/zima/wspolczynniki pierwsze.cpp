#include <iostream>
#include <vector>
using namespace std;

////////napisac zlozone do 8000000 a potem na bierzaco

vector <int> vecto;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n;
	cin>>n;

	int liczby[n];
    long long maks_d=0;

	for(long long i=0;i<n;i++)
	{
		cin>>liczby[i];

		if(liczby[i]>maks_d)
		{
			maks_d=liczby[i];
		}
	}

	bool zlozone[maks_d+1];

	for(int i=2;i<=maks_d;i++)
	{
		//cout<<i<<" :wykonane\n";
		if(zlozone[i]==false)
		{
			vecto.push_back(i);

			for(int j=i*i;j<=maks_d;j=j+i)
			{
				zlozone[j]=true;
				//cout<<j<<": true\n";
			}
		}
	}

	for(long long i=0;i<n;i++)
	{
		if(liczby[i]==1)
		{
			cout<<"1\n";
		}
		else if(liczby[i]==2)
		{
			cout<<"2\n";
		}
		else
		{
			for(int j=0;j<vecto.size();j++)
			{
				while(liczby[i]%vecto[j]==0)
				{
					cout<<vecto[j]<<" ";
					liczby[i]=liczby[i]/vecto[j];
				}
			}
			cout<<"\n";
		}
	}

}
