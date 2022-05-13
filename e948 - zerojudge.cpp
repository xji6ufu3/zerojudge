#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a;
	while(cin>>a)
	{
		while(a--)
		{
			int g,A,h,w;
			cin>>g>>A>>h>>w;
			if(g) cout<<fixed<<setprecision(2)<<13.7*w+5.0*h-6.8*A+66<<'\n';
			else cout<<fixed<<setprecision(2)<<9.6*w+1.8*h-4.7*A+655<<'\n';
		}
	}
}
