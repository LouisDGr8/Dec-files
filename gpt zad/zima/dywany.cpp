#include <iostream>
#include <vector>
using namespace std;

vector <short> vecto;

int main()
{
	int ilosc;
	cin>>ilosc;
	
	
	bool gate=false;
	char ch;
	int plus=0,kropka=0;
	while(ilosc--)
	{
		cin>>ch;
		if(ch=='+')
		{
			plus++;
			gate=true;
			
			if(kropka>0)
			{
				vecto.push_back(-kropka);
				kropka=0;
			}
		}
		else if(ch=='.'&&gate==true)
		{
			kropka++;
			
			if(plus>0)
			{
				vecto.push_back(plus);
				plus=0;
			}
		}
		if(ilosc==0)
		{
			if(plus>0)
			{
				vecto.push_back(plus);
			}
		}
	}
//	for(int i=0;i<vecto.size();i++)
//	{
//		cout<<vecto[i]<<" ";
//	}
	
//	cout<<"\n"; ///////////////////////
	
	int dlugosc;
	cin>>dlugosc;     //10     +.+..++.++    3      15 +.++.+.+..++..+ 2     21 +++..++...+......+... 6   40 ....+++...+.....+++....++++++++++++++--- 2
	
	int dywany=0;
	int reszta=0;
	int mnoznik;
	for(int i=0;i<vecto.size();i+=2)
	{
		mnoznik=0;
		vecto[i]-=reszta;
//		cout<<"vecto["<<i<<"] : "<<vecto[i]<<"\n"; //////////////////////////////////////////
		reszta=0;
		
		if(vecto[i]>dlugosc)
		{
			while(vecto[i]>dlugosc)
			{
				vecto[i]-=dlugosc;
				mnoznik++;
			}
			dywany+=mnoznik;
//			cout<<dywany<<" dywany\n"; /////////////////////////////////////////
			
			if(vecto[i]<0)
			{
				reszta=(-vecto[i]);
				
				if(reszta>(-vecto[i+1]))
				{
					reszta+=vecto[i+1];
				}
				else
				{
					reszta=0;
				}	
			}
			else if(vecto[i]>0)
			{
				dywany++;
				reszta=dlugosc-vecto[i];
				
				if(reszta>(-vecto[i+1]))
				{
					reszta+=vecto[i+1];
				}
				else
				{
					reszta=0;
				}		
			}
			
		}
		else if(vecto[i]<dlugosc&&vecto[i]>0)
		{
			dywany+=1;
			reszta=dlugosc-vecto[i];
				
			if(reszta>(-vecto[i+1]))
			{
				reszta+=vecto[i+1];
			}
			else
			{
				reszta=0;
			}		
		}
		else if(vecto[i]<0)
		{
			reszta=(-vecto[i]);
				
			if(reszta>(-vecto[i+1]))
			{
				reszta+=vecto[i+1];
			}
			else
			{
				reszta=0;
			}	
		}
		else if(vecto[i]==dlugosc)
		{
			dywany++;
			reszta=0;
		}
//		cout<<reszta<<" : reszta\n";
//		cout<<dywany<<" : dywany\n";
	}
	cout<<dywany;
	
	
	
}
