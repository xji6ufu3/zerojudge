#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int q=0;q<a;q++)
	{
		long long int s,d,f;
		cin>>s>>d>>f;
		if(s==1)
		cout<<d+f<<'\n';
		else if(s==2)
		cout<<d-f<<'\n';
		else if(s==3)
		cout<<d*f<<'\n';
		else
		cout<<d/f<<'\n';
	}
	return 0;
}
