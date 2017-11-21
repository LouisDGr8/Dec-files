#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main2();
int main()
{
    cout<<"Jaki to system?"<<endl;;
    int sym;
    cin>>sym;
    
    cout<<"wpisz ile znakow"<<endl<<"\n";
    int znaki;
    cin>>znaki;
    if(znaki>20)
    {
        main2();
    }
    double liczba;
    cout<<"wpisuj cyfry"<<endl<<"\n";
    double suma=0;
    for(int i=znaki-1;i>0;i--)
    {
       cin>>liczba;
       if(liczba>sym-1)
       {
          main2();
       }
       suma=suma+liczba*pow(sym,i);
    }
    cin>>liczba;
    suma=liczba+suma;
    cout<<suma<<endl;
    cout<<"wpisz ponownie liczbe"<<endl;
    int licz;
    cin>>licz;
 //od tego nie ruszac    
    cout<<"Do ktorego systemu convertowac?"<<endl;
    int sys;
    cin>>sys;
    int temp[100];
    int i=1;
    cout<<licz<<"("<<sys<<") to: \n";
    if(licz>0)
    {
        if(sys>1)
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
            cout<<"Tys debil czy smieszek :*"<<endl<<"\n";
        }
    }
    else
    {
       cout<<"||ERROR||"<<endl<<"\n";
    }
    cout<<endl;
    main2();
    return 0;
}

int main2()
{
    cout<<"Jeszcze raz? \n 1/0"<<endl<<"\n";
    int odp;

        cin>>odp;
    switch(odp)
    {
        case 1: main();
        default: cout<<"Elo \n";
    }
    system("pause");
    return 0;
}
