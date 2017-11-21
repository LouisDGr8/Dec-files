#include <iostream>

using namespace std;
int t9(char a)
{
	if(a=='a'||a=='b'||a=='c')
	{
		cout<<"2";
	}
	
	if(a=='d'||a=='e'||a=='f')
	{
		cout<<"3";
	}
	if(a=='g'||a=='h'||a=='i')
	{
		cout<<"4";
	}
	if(a=='j'||a=='k'||a=='l')
	{
		cout<<"5";
	}
	if(a=='m'||a=='n'||a=='o')
	{
		cout<<"6";
	}
	if(a=='p'||a=='q'||a=='r'||a=='s')
	{
		cout<<"7";
	}
	if(a=='t'||a=='u'||a=='v')
	{
		cout<<"8";
	}
	if(a=='x'||a=='y'||a=='z'||a=='w')
	{
		cout<<"9";
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
cin.tie(NULL);
	
   string a;
   cin>>a;
   char b;
   int size=a.length();
   for(int i=0;i<size;i++)
   {
   		b=a[i];
   		t9(b);
   }
   
   return 0;     
}
