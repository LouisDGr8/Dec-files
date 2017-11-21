#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <long long> vecto;
int main()
{
	long long ilosc;
	cin>>ilosc;
	
	long long N,krowy;
	long long s,t,mid;
	long long i=0;
	long long poz_krowy_1=0;
	long long krowy_1=1;
	long long temp,sum=0;;
	
	while(ilosc--)
	{
		i=0;
		cin>>N>>krowy;
		while(N--)
		{
			cin>>temp;
			vecto.push_back(temp);
		}
		
		sort(vecto.begin(),vecto.end());
		
		s=1,t=vecto.back();
		
		while(s!=t)
		{
			mid=(s+t+1)/2;
//	cout<<s<<" :s\n"<<t<<" :t\n"<<mid<<" :mid\n";
			i=0;
			krowy_1=1;
			sum=0;
			poz_krowy_1=0;
//	cout<<"krowy_1 : ";
			for(long long i=1;i<vecto.size();i++)
			{	
				sum=vecto[i]-vecto[poz_krowy_1];
				if(sum>=mid)
				{
					krowy_1++;
					poz_krowy_1=i;
					sum=0;
				}
			}
//	cout<<krowy_1<<" ";
//	cout<<"\n";	
			if(krowy_1>=krowy)
			{
				s=mid;
//	cout<<"krowy_1>=krowy\n";
			}
			if(krowy_1<krowy)
			{
				t=mid-1;
//	cout<<"krowy_1<krowy\n";
			}
		}
		cout<<s;
		
//			1	5      3         1 2 8 4 9
	}
	exit(0);
}
