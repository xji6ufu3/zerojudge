#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int a;
	while(cin>>a)
	{
		for(int q=0;q<a;q++)
		{
			int h,m,hh,mm,mmm;
			cin>>h>>m>>hh>>mm>>mmm;
			if(((hh-h)*60+mm-m)>=mmm) cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
}

