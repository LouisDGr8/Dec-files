#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	
	int liczba_testow;
	cin>>liczba_testow;
	while(liczba_testow)
	{
		int best;
		
		int wiersz,kolumny;
		cin>>wiersz>>kolumny;
	
		int tab[kolumny][wiersz];
		int got[kolumny][wiersz];
	
		for(int i=0;i<wiersz;i++)//////wpis wierszy
		{
			for(int j=0;j<kolumny;j++)////wpis kolumn
			{
				cin>>tab[j][i];
				got[j][i]=tab[j][i];
			}
		}////////////////////////////////////////////////////
		
		if(kolumny==1)////1 kolumna
		{
			///////////dziala 10000%%%%%%%% 
			if(wiersz==1)////1 komorka
			{
				best=tab[0][0];
			}
			///////////dziala 10000%%%%%%%% 
			else///1 kol, x wierszy
			{
				best=tab[0][0];
				for(int i=0;i<wiersz;i++)
				{
					if(best>tab[0][i])//minimum
					{
						best = tab[0][i];
					}
				}
			}
			cout<<best;
		}
		else if(wiersz==1)///1 wiersz
		{
			///////////dziala 10000%%%%%%%% 
			if(kolumny==1)///1 komorka
			{
				best= tab[0][0];
			}
			///////////dziala 10000%%%%%%%% 
			else///1 ciag liczb
			{
				for(int j=1;j<kolumny;j++)
				{
					got[j][0]=(tab[j][0]+tab[j-1][0]);
					tab[j][0]=got[j][0];
				}
				best=got[kolumny-1][0];
			}
			cout<<best;
		}
		///////////dziala 10000%%%%%%%% 
		else////normalny
		{
			for(int j=1;j<kolumny;j++)
			{
				for(int i=0;i<wiersz;i++)
				{
					if(i==0)  ///gorny lewy rog
					{
						got[j][i]=min(  (tab[j-1][i]+tab[j][i]) , (tab[j-1][i+1]+tab[j][i]) );
						tab[j][i]=got[j][i];
					}
					else if(i==wiersz-1)  ///dolny lewy rog
					{
						got[j][i]=min(  (tab[j-1][i]+tab[j][i]) , (tab[j-1][i-1]+tab[j][i]) );
						tab[j][i]=got[j][i];
					}
					else
					{	
						got[j][i]=min( min(      (tab[j-1][i]+tab[j][i]) , (tab[j-1][i-1]+tab[j][i]) )     ,   (tab[j-1][i+1]+tab[j][i])  );      
						tab[j][i]=got[j][i];				
					}							
				}
			}
			for(int i=0;i<wiersz;i++)
			{
				if(best>got[kolumny-1][i])//minimum
				{
					best = got[kolumny-1][i];
				}
			}
			cout<<best;
		}
		liczba_testow--;	
	}
	return 0;
}

