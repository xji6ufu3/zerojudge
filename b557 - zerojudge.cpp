#include<iostream>
#include<algorithm>
using namespace std;
int ans,n;
void d(int a[],int k[],int b,int kk)
{
	if(b==3)
	{
		int asd=0;
		for(int q=0;q<2;q++) asd+=k[q]*k[q];
		if(asd==k[2]*k[2]) ans++;
		return;
	}
	for(int q=kk;q<n;q++)
	{
		k[b]=a[q];
		d(a,k,b+1,q+1);
		k[b]=0;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int T;
	cin>>T;
	for(int q=0;q<T;q++)
	{
		ans=0;
		cin>>n;
		int a[n],k[3]={};
		for(int q=0;q<n;q++) cin>>a[q];
		sort(a,a+n);
		d(a,k,0,0);
		cout<<ans<<'\n';
	} 
}

