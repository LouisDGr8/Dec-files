#include <iostream>
#include <stack>
#include <cstdlib>
#include <stdio.h>
using namespace std;
long long push;
int main()
{
	ios::sync_with_stdio(0);
	stack<long long int> stos;
	int zapytania;
	cin>>zapytania;
	
	string polecenie;
	while(zapytania--)
	{
		cin>>polecenie;
		if(polecenie=="top")
		{
			if(stos.empty()==false)
			{
				cout<<stos.top()<<"\n";
			}
		}
		if(polecenie=="pop")
		{
			if(stos.empty()==false)
			{
				stos.pop();
			}
		}
		if(polecenie=="push")
		{
			cin>>push;
			stos.push(push);
		}
	}
	cout<<"all done";
	return 0;
}
