#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

int sprawdzanie(string a, vector< pair<int,int> > b)
{
	if(a=="M")
	{
		sort(b.begin(),b.end());
		cout<<b.back().second<<"\n";
		b.pop_back();
		
	}
	if(a=="R")
	{
		int cuks,i;
		cin>>i>>cuks;
		b[i-1].first=b[i-1].first-cuks;
	}
}

int main()
{
	vector < pair<int, int> > vector;
	
	int il_dzieci;
	cin>>il_dzieci;

	for(int i=1;i<=il_dzieci;i++)
	{
		int y=0;
		cin>>y;
		pair<int, int> p=make_pair(y,i);
		
		vector.push_back(p);
	}
			
	int il_pkt;
	cin>>il_pkt;
	int il_pkt1=il_pkt;
	
	
	
	while(il_pkt--)
	{
		string ala;
		cin>>ala;
		sprawdzanie(ala,vector);	
	}
	sort(vector.begin(),vector.end());
	cout<<"\n";
	for(int i=0;i<il_pkt1;i++)
	{
		cout<<vector[i].first<<" "<<vector[i].second<<" \n";
	}
	return 0;
}
