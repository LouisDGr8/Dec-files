#include <iostream>
int d=0;
using namespace std;
int t9(char a)
{
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='y')
	{
		d++;
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
   cout<<d;
   
   return 0;     
}
