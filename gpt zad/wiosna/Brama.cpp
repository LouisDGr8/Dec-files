#include <iostream>
#include <queue>
#include <cstdlib>
#include <stdio.h>
using namespace std;
string push;
int main()
{
	ios::sync_with_stdio(0);
	queue<string> kolejka;
	int zapytania;
	cin>>zapytania;
	
	string polecenie;
	while(zapytania)
	{
		cin>>polecenie;
		if(polecenie=="top")
		{
			cout<<kolejka.front()<<"\n";
		}
		if(polecenie=="pop")
		{
			kolejka.pop();
		}
		if(polecenie=="push")
		{
			cin>>push;
			kolejka.push(push);
		}
		zapytania--;
	}
	return 0;
}
