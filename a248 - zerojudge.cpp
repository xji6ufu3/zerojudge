#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int a,s,n;
	while(cin>>a>>s>>n)
	{
		cout<<a/s<<".";
		a=a%s;
		for(int q=0;q<n;q++)
		{
			a*=10;
			cout<<a/s;
			a=a%s;
		}
		cout<<'\n';
	}
}
