#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,m,a;
	string str="",st;
	while(cin>>n>>m,n and m)
	{
		for(int q=0;q<n;q++)
		{
			cin>>st;
			str+=st;
		}
		for(int q=0;q<m;q++)
		{
			cin>>a;
			cout<<str[a-1];
		}
		cout<<'\n';
		str.clear();
	}
}

