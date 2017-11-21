#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int ilosc;
	cin>>ilosc;
	
	int liczba;
	
	int temp;
	
	vector <int> talerze;
	
	for(int i=0;i<ilosc;i++)
	{
		cin>>liczba;
		switch(liczba)
		{
			case 1: cin>>temp; talerze.push_back(temp); cout<<"\n";
			break;
			
			case 0: cout<<talerze.back()<<"\n";
			break;
			
			case -1: talerze.pop_back(); cout<<"\n";
			break;
		}
	}
	return 0;
}
