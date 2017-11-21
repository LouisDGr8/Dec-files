#include <iostream>
#include <vector>
using namespace std;

vector <int> vecto;
int szerokosc;
int dlugosc;
int dywany=0;
int reszta=0;
int mnoznik;
int ilosc;
int i_pop;
int i_1_pop;
int ilosc_1;
int s,t,proba;
bool spraw=false;

int funkcja()
{
	if(vecto.empty()==true)
	{
		cout<<"0";
		goto koniec;
	}
    //10     +.+..++.++    3      15 +.++.+.+..++..+ 2     21 +++..++...+......+... 6   40 ....+++...+.....+++....++++++++++++++--- 2
	while(true)
	{
		s=1;
		t=ilosc_1;
		
		while(s!=t)
		{
			spraw=false;
			proba=(s+t)/2;
			
			dywany=0;
			reszta=0;
			mnoznik=0;
			
			//cout<<"\n\nproba: "<<proba;
			
			for(int i=0;i<vecto.size();i+=2)
			{
				i_pop=vecto[i];
				i_1_pop=vecto[i+1];
				mnoznik=0;
				
				if(dywany>dlugosc+1)
				{
					goto apple;
				}
				vecto[i]-=reszta;
				//cout<<"vecto["<<i<<"] : "<<vecto[i]<<"\n"; //////////////////////////////////////////
				reszta=0;
				
				if(vecto[i]>proba)
				{
					while(vecto[i]>proba)
					{
						vecto[i]-=proba;
						mnoznik++;
					}
					dywany+=mnoznik;
					//cout<<dywany<<" dywany\n"; /////////////////////////////////////////
					
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
						reszta=proba-vecto[i];
						
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
				else if(vecto[i]<proba&&vecto[i]>0)
				{
					dywany+=1;
					reszta=proba-vecto[i];
						
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
				else if(vecto[i]==proba)
				{
					dywany++;
					reszta=0;
				}
				//cout<<reszta<<" : reszta\n";
				//cout<<dywany<<" : dywany\n";
				vecto[i]=i_pop;
				vecto[i+1]=i_1_pop;
			}
			apple:
			if(dywany<=dlugosc)
			{
				spraw=true;
			}
			
			if(spraw==true)
			{
				t=proba;
				//cout<<" 1\n";
			}
			else
			{
				s=proba+1;
				//cout<<" 0\n";
			}
			
		}
		if(s==t)
		{
			cout<<s<<"\n";
			goto koniec;
		}
	}
	koniec:;
}


int main()
{
	cin>>ilosc;
	ilosc_1=ilosc;
	
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
	cin>>dlugosc;
	
	funkcja();
	
	
	for(int i=0;i<vecto.size();i++)
	{
		cout<<vecto[i]<<" ";
	}
//	
//	cout<<"\n"; ///////////////////////
	
	
	
	
	
}
