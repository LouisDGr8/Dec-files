#include <iostream>
#include <vector>
using namespace std;

vector <int> pierwsze;
//vector <int> sumy;
int a,b;

int main()
{
	ios_base::sync_with_stdio(0);
	
	bool l_dziel=0;
	
	pierwsze.push_back(0);
	pierwsze.push_back(0);
	
	for(long int i = 2;i<1000000;i++)
	{
		l_dziel=false;
		
		for(int dzielnik = 2;dzielnik*dzielnik<=i;dzielnik++)
		{
			if(i%dzielnik==0)
			{
				pierwsze.push_back(0);
				l_dziel=true;
				break;
			}
		}
		if(l_dziel==false)
		{
			pierwsze.push_back(1);
		}
	}
	
	
//	long int size = pierwsze.size();
//	sumy.push_back(0);
//	for(int i=0;i<size;i++)
//	{
//		sumy.push_back(sumy[i]+pierwsze[i+1]);	
//	}	
//	pierwsze.erase(pierwsze.begin(),pierwsze.end());	
		
	int suma=0;
		
	long int liczba_zapytan;
	cin>>liczba_zapytan;
	
	while(liczba_zapytan--)
	{
		suma=0;
		cin>>a;
		cin>>b;
		
		//suma=sumy[b]-sumy[a-1];
		for(a;a<=b;a++)
		{
			suma=suma+pierwsze[a];
		}
		cout<<suma<<"\n";
	}
}
