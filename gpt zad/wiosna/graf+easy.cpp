#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int x,y;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int wierz, kraw;
	cin>>wierz>>kraw;
	vector< queue<int> > vector_2(wierz);
			
	for(int i=0;i<kraw;i++)
	{
		cin>>x>>y;
		vector_2[x-1].push(y);

		vector_2[y-1].push(x);
	}
	
	for(int i=0;i<wierz;i++)
	{
		int size=vector_2[i].size();
		if(size==0)
		{
			cout<<"vertex "<<i+1<<" has no neighbours ";
		}
		else
		{
			cout<<"vertex "<<i+1<<" has neighbours ";
			
			while(size>0,size--)
			{
			
				cout<<vector_2[i].back()<<" ";
				vector_2[i].pop();
			}
		}
		cout<<"\n";
	}
	return 0;
}

