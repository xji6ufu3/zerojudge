#include <iostream>
using namespace std ;
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,x,a[30001]={},c=0;
	cin>>n;
	for(int q=1; q<=n; q++)
	{
		cin>>x;
		a[x]++;
		c=max(c,a[x]);
	}
	for(int q=1; q<=30000; q++)
	if(a[q]==c) cout<<q<<" "<<c<<'\n';
}
