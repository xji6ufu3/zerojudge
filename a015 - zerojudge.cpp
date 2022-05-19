#include<iostream>
using namespace std;
int main()
{
	int a,s,w;
	while(cin>>a>>s)
	{
	int q[s][a]={};
	for(int z=0;z<a;z++)
	{
		for(int x=0;x<s;x++)
		{
			cin>>w;
			q[x][z]=w;
		}
	 } 
	for(int z=0;z<s;z++)
	{
		for(int x=0;x<a;x++)
		cout<<q[z][x]<<" ";
		cout<<endl;
	 } 	
	}
	
	 return 0;
 }
