#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int a,s;
	cin>>a>>s;
	if(a>s) swap(a,s);
	if(a!=s)
	{
		if(s-a>a) cout<<a<<"+"<<s-a<<"="<<s;
		else cout<<s-a<<"+"<<a<<"="<<s;
	}
	else
	{
		if(s-3>3) cout<<3<<"+"<<s-3<<"="<<s;
		else cout<<s-3<<"+"<<3<<"="<<s;
	} 
}

