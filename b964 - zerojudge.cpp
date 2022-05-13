#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int a[n];
	for(int q=0;q<n;q++)
	cin>>a[q];
	sort(a,a+n);
	int k1=a[0],k2=a[0];
	for(int q=0;q<n-1;q++)
	{
		if(a[q]<60 and a[q+1]>=60)
		{
			k1=a[q];
			k2=a[q+1];
		}
		else if(a[q+1]<60)
		k1=a[q+1];
		cout<<a[q]<<' ';
	}
	cout<<a[n-1]<<'\n';
	if(k1>=60)
	cout<<"best case\n";
	else
	cout<<k1<<'\n';
	if(k2<60)
	cout<<"worst case";
	else
	cout<<k2;
}
