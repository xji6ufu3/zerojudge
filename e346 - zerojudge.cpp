#include<iostream>
using namespace std;
#define AC ios_base::sync_with_stdio(false)
int main()
{
	AC;
	cin.tie(0);
	int n,Q,l,r;
	cin>>n;
	int a[n];
	long long s[n];
	cin>>a[0];
	s[0]=a[0];
	for(int q=1;q<n;q++)
	{
		cin>>a[q];
		s[q]=s[q-1]+a[q];
	}
	cin>>Q;
	while(Q--)
	{
		cin>>l>>r;
		if(l==1)
		cout<<s[r-1]<<'\n';
		else
		cout<<s[r-1]-s[l-2]<<'\n';
	}
}
