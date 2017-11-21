#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int n,i,j,tmp,beczki,zbiornik;
	
	cin>>n;
	cin>>beczki;
	vector <int> tab[n];
	
	for(i=0;i<beczki;i++)
	{
		cin>>zbiornik;
		cin>>tmp;
		tab[zbiornik-1].push_back(tmp);
	}
	for(i=0;i<n;i++)
	{
		cout<<"Zbiornik "<<i+1<<": ";
		while(tab[i].size()>0)
		{
		cout<<tab[i].back()<<" ";
		tab[i].pop_back();
		}
		cout<<"\n";
//		if(tab[i].size()==1); 
//		{
//		cout<<tab[i].back()<<" ";
//		}
	}
	return 0;
}
