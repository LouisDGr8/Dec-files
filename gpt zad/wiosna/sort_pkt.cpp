#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	vector < pair<int, int> > vector;
	
	
	int il_pkt;
	cin>>il_pkt;
	int il_pkt1=il_pkt;
	
	
	while(il_pkt--)
	{
		int x=0,y=0;
		cin>>x>>y;
		pair<int, int> p=make_pair(x,y);
		
		vector.push_back(p);	
	}
	sort(vector.begin(),vector.end());
	cout<<"\n";
	for(int i=0;i<il_pkt1;i++)
	{
		cout<<vector[i].first<<" "<<vector[i].second<<" \n";
	}
	return 0;
}
