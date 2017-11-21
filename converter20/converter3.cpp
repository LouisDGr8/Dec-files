#include <iostream>
#include <windows.h>
#include <math.h>
#include <conio.h>
#include <vector>
using namespace std;

vector <double> vecto;
bool gate=false;

int main2();

void clear()
{
	cin.sync();
    cin.clear();
    cin.ignore(10,'\n');
}

int main()
{
	int i=1;
	int licz = (int)suma;
    int size=vecto.size();
	system("cls");
    cout<<"Jaki to system?"<<endl;;
    int sym;

    do
	{
    cin>>sym;
    if(sym<2)
		{
			cout<<"System liczbowy nie moze byc nizszy niz 2!!!!!\n\a";
		}
	}while(sym<2);
    
    clear();
    getch();
    
    cout<<"wpisz znaki. by zakonczyc wpisz litere"<<endl<<"\n";
    int znaki;
    
    double tempo;
    double liczba;
    cout<<"wpisuj cyfry"<<endl<<"\n";
    double suma=0;
    while(gate==false)
    {
       cin>>tempo;
       if(cin.good()==false)
	   {
	   		gate=true;
	   		break;
	   }
	   else if(cin.good()==true)
	   {
	   		liczba=tempo;
	   }
	   
       if(liczba>sym-1)
       {
		    Sleep(200);
       	    system("cls");
       	    
       	    cout<<"liczba nie pasuje do tego systemu !!!!\n\a";
            goto one;
            break;
       }
       vecto.push_back(liczba);
    }
    
    
    for(int i=0;i<size;i++)
	{
    	suma=suma+vecto[i]*pow(sym,((size-1)-i));
	}
    
	cout<<suma<<"\n";
    cout<<licz<<"\n";
 //od tego nie ruszac    
    cout<<"Do ktorego systemu convertowac?"<<endl;
    int sys;
  
    do
	{
    cin>>sys;
    if(sys<2)
		{
			cout<<"System liczbowy nie moze byc nizszy niz 2!!!!!\n\a";
		}
	}while(sys<2);  
    
    int temp[100];
    cout<<licz<<"("<<sys<<") to: \n";
    if(licz>=0)
    {
        while(licz)
        {
            temp[i]=licz%sys;
            licz=licz/sys;
            i++;
        }
        for(int abc=i-1;abc>0;abc--)
        {
            cout<<temp[abc]<<".";   
        }
    }
    else
    {
       cout<<"||ERROR|| liczba jest prawdopodobnie ujemna ||ERROR||"<<endl<<"\n";
    }
    cout<<endl;
    main2();
    return 0;
    
    one:
}

int main2()
{
    cout<<"Jeszcze raz? \n y/n"<<endl<<"\n";
    char ch;

        ch = getch();
    switch(ch)
    {
        case 'y': main();
        default: cout<<"Elo \n";
    }
    
    return 0;
}
