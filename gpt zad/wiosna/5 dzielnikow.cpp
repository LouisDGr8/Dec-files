#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
//	cin.tie(NULL);
	
	long long int x;
	int ilosc;
 	cin>>ilosc;
 	long long int liczba;
 	for(int a=0;a<ilosc; a++) 
 	{  
		bool ok=true;
//		bool prawda=false;
//		do
//		{	
//		cout<<"wpisz liczbe\t";
 		cin>>liczba;   
//		}
// 		while(cin.fail());
		x=(sqrt(sqrt(liczba)));   
		for(int i=2;i*i<=x;i++)
		{
			if(x%i==0)
			{
				ok=false;
			}
		}
		if(x*x*x*x==liczba && ok && liczba!=1)
		{
			cout<<"TAK"<<" \n";
		}
		else
		{
			cout<<"NIE"<<" \n";
		}
	}
	return 0;
}
