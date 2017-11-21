#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int x,y;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int wierz, kraw;
	cin>>wierz>>kraw;
	vector< vector<int> > vector_2(wierz);
			
	for(int i=0;i<kraw;i++)
	{
		cin>>x>>y;
		vector_2[x-1].push_back(y);

		vector_2[y-1].push_back(x);
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
			
			for(int j=0;j<size;j++)
			{
			
				int random=vector_2[i][j];
				cout<<random<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}

