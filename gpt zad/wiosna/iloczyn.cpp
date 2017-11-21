#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	
	vector<long long int> ala;
	long long temp;
	
	long long liczba;
	cin>>liczba;
	if(liczba>2)
	{
		
		for(int i=9;i>1;i--)
		{
			while(liczba%i==0)
			{
				liczba=liczba/i;
				ala.push_back(i);	
			}
		}
		if(liczba>9)
		{
			cout<<"NIE";
		}
		else
		{
			if(ala.size()!=0)
			{
				sort(ala.begin(),ala.end());
			
				for(int a=0;a<ala.size();a++)
				{
					cout<<ala[a];
				}
			}
			else
			{
				cout<<"NIE";
			}
		}
	}
	else if(liczba==1||liczba==0)
	{
		cout<<liczba;
	}
	else
	{
		cout<<"NIE";
	}
	return 0;
}
