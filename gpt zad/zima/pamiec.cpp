#include <iostream>

using namespace std;

int main()
{
	double mb=1000000;
	double i,c,b,l;
	cin>>i>>c>>b>>l;
	
	cout<<int(((4*i)/mb)+(c/mb)+(b/mb)+((8*l)/mb));
}
