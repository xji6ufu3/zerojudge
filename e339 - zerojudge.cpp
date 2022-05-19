#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	long long a[n],b[n];
	cin>>a[0];
	b[0]=a[0];
	cout<<a[0]<<' ';
	for(int q=1;q<n-1;q++)
	{
		cin>>a[q];
		b[q]=b[q-1]+a[q];
		cout<<b[q]<<' ';
	}
	cin>>a[n-1];
	cout<<b[n-2]+a[n-1];
 }
