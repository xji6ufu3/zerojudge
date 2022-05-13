#include<iostream>
using namespace std;
int main()
{
	int n,m,i;
	while(cin>>n>>m)
	{
		if(n!=m) cout<<m+1<<'\n';
		else if(n==m) cout<<m<<'\n';
	}
	return 0;
}

