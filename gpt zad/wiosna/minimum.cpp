#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	vector<int> liczby;
	int temp;
	int size;
		
	int ilosc;
	cin>>ilosc;
	int tab[ilosc];
	
	for(int i=0;i<ilosc;i++)
	{
		cin>>tab[i];
	}
	
	if(ilosc>=3)
	{
		if(tab[0]<tab[1])
		{	
			int temp=tab[0];
			liczby.push_back(temp);
		}
		for(int i=0;i<ilosc-2;i++)
		{
			if(tab[i]>tab[i+1] && tab[i+1]<tab[i+2])
			{
				int temp=tab[i+1];
				liczby.push_back(temp);
			}
		}
		if(tab[ilosc-2]>tab[ilosc-1])
		{
			int temp=tab[ilosc-1];
			liczby.push_back(temp);
		}
		sort(liczby.begin(),liczby.end());
		
		size=liczby.size();
		int random=size;
		for(int asd=0;asd<size;asd++)
		{
			if(liczby[asd]==liczby[asd+1])
			{
				random--;
			}
		}
		cout<<random;
		
	}
else if(ilosc==2)
{
	if(tab[0]==tab[1])
	{
		cout<<"0";	
	}
	else
	{
		cout<<"1";
	}
}
else
{
	cout<<"1";
}	
}
