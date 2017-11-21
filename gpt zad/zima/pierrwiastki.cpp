#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

long long liczba;

int funkcja()
{
	int s=0,t=liczba;
	int mid;
	while(s!=t)
	{
		mid=(s+t+1)/2;
		if(mid>(liczba/mid)/mid)
		{
//			cout<<t<<":t nie zmienione    ";
			t=mid-1;
//			cout<<mid<<":mid     ";
//			cout<<s<<":s     ";
//			cout<<t<<":t\n";
		}
		else
		{
//			cout<<s<<":s nie zmienione    ";
			s=mid;
//			cout<<mid<<":mid     ";
//			cout<<s<<":s     ";
//			cout<<t<<":t\n";
		}
		
	}
	cout<<t<<"\n";	
}


int main()
{
	ios_base::sync_with_stdio(0);
	
	long long liczba_zapytan;
	cin>>liczba_zapytan;
	
	while(liczba_zapytan--)
	{
		cin>>liczba;
		funkcja();
	}
	exit(0);
}
