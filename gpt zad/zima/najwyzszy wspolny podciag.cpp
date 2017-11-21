#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int temp;
	long long suma=0;
	long long najwyzsza=0;
	while(n--)
	{
		cin>>temp;
		
		suma=suma+temp;
		
		if(suma<0)
		{
			suma=0;
		}
		if(suma>najwyzsza)
		{
			najwyzsza=suma;
		}
	}
	cout<<najwyzsza;
	exit(0);
}

