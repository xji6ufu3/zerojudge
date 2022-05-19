#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int q=0;q<a;q++)
	{
		int s,d;
		bool f=1;
		cin>>s>>d;
		int asd[s][d];
		for(int w=0;w<s;w++)
		{
			for(int e=0;e<d;e++)
			{
				cin>>asd[w][e];
			}
		}
		for(int w=s-1;w>=0;w--)
		{
			for(int e=d-1;e>=0;e--)
			{
				if(asd[w][e]!=asd[s-w-1][d-e-1])
				{
					f=0;
					break;
				}
			}
		}
		if(f)
		cout<<"go forward\n";
		else
		cout<<"keep defending\n";
	}
 }
