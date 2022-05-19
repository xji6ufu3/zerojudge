#include<iostream>
using namespace std;
int main()
{
	int a,s,d[10005]={},f,g,h=0;
	cin>>a>>s;
	for(int q=s;q>=1;q--)
	{
		cin>>f>>g;
		for(;f<=g;f++)
		{
			d[f]=1;
		 } 
	}
	for(int w=0;w<=a;w++)
	{
		if(d[w]==0)
		h++;
	}
	cout<<h;
	return 0;
}
