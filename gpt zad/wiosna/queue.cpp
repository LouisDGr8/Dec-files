#include <iostream>
#include <queue>
#include <cstdlib>
#include <stdio.h>
using namespace std;
long long push;
int main()
{
	ios::sync_with_stdio(0);
	queue <long long int> kopiec;
	int zapytania;
	cin>>zapytania;
	
	string polecenie;
	while(zapytania--)
	{
		cin>>polecenie;
		if(polecenie=="top")
		{
			if(kopiec.empty()==false)
			{
				cout<<kopiec.front()<<"\n";
			}
		}
		if(polecenie=="pop")
		{
			if(kopiec.empty()==false)
			{
				kopiec.pop();
			}
		}
		if(polecenie=="push")
		{
			cin>>push;
			kopiec.push(push);
		}
	}
	cout<<"all done";
	return 0;
}
