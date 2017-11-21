#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int ilosc_kulek,ilosc_pojemnikow;
	cin>>ilosc_kulek>>ilosc_pojemnikow;
	
	int tab[ilosc_kulek];
	for(int i=0;i<ilosc_kulek;i++)
	{
		cin>>tab[i];
	}	
	for(int pojemniki = 0;pojemniki<ilosc_pojemnikow;pojemniki++)
	{
		for(int i=0;i<ilosc_kulek;i++)
		{
			if(tab[i]==pojemniki)
			{
				cout<<i+1<<" ";
			}
		}
		cout<<"\n";	
	}
}
