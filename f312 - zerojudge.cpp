#include<iostream>
using namespace std;
int main()
{
	int a,b,c,aa,bb,cc,n;
	cin>>a>>b>>c>>aa>>bb>>cc>>n;
	int ans[n+1];
	for(int q=0;q<n+1;q++)
	{
		ans[q]=a*q*q+b*q+c+aa*(n-q)*(n-q)+bb*(n-q)+cc;
	}
	int as=ans[0];
	for(int q=0;q<n+1;q++)
	{
		if(as<ans[q])
		as=ans[q];
	}
	cout<<as;
 }
