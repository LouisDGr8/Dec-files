#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

vector <long long int> vector_1;
//vector <long long int> vector_2;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	long long int temp;
	
	long int il_tygrysow;
	cin>>il_tygrysow;
	
	while(il_tygrysow--)
	{
		cin>>temp;
		vector_1.push_back(temp);
	}
	
	sort(vector_1.begin(),vector_1.end());
	
	int size=vector_1.size();
	
	long int lower_b;
	int length;
	int najwyzszy=1;
	
	for(int i=0;i<size;i++)
	{
		lower_b=vector_1[i];
		length=1;
		
		for(int j=i+1;j<size;j++)
		{
			if(lower_b*2>vector_1[j])
			{
				length++;
			}
			else
			{
				if(najwyzszy<length)
				{
					najwyzszy=length;
				}
				break;
				//j=size+1;
				//vector_2.push_back(length);
			}
		}
	}
	//sort(vector_2.begin(),vector_2.end());
	
	//cout<<vector_2.back();
	cout<<najwyzszy;
	
	return 0;
	
}
