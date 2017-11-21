#include <iostream>
using namespace std;

int main()
{
	int ilosc_ksiazek,maks_grub;
	cin>>ilosc_ksiazek>>maks_grub;
	
	int suma;
	int przedzialy=0;
	int temp;
	
	while(ilosc_ksiazek--)
	{
		cin>>temp;
		
		suma+=temp;
		if(suma>maks_grub)
		{
			przedzialy++;
			suma=temp;
		}
	}
	cout<<przedzialy;
}
