#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nick;
	cin>>nick;
	
	bool czy=false;
	nick.length();
	for(int i=0;i<nick.length();i++)
	{
		if(czy==false)
		{
			if(nick[i]>nick[i+1])
			{
				nick.erase(i,1);
				czy=true;
			}
		}
	}
	if(czy!=true)
	{
	nick.erase(nick.length()-1);
	}
	cout<<nick<<endl;
	return 0;
}
