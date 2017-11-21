#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <stdio.h>
using namespace std;
int push;
int main()
{
	ios::sync_with_stdio(0);
	vector< pair<int,int>  > para;
	int zapytania;
	cin>>zapytania;
	
	string polecenie;
	while(zapytania)
	{
		int x,y;
		cin>>x>>y;
		pair<int,int> par=make_pair(x,y);
		para.push_back(par);

		zapytania--;
	}
	sort(para.begin(),para.end());
	int size=para.size();
	for(int i=0;i<size;i++)
	{
		cout<<para[i]<<" \n"
	}
	return 0;
}
