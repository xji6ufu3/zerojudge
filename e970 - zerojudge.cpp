#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,m,b,sum=0;
	cin>>n;
	int a[n];
	for(int q=0;q<n;q++) cin>>a[q];
	b=a[n-1];
	for(int q=0;q<n;q++) if((q+1)%b==1) sum+=a[q];
	if(sum%n) cout<<sum%n<<' '<<a[sum%n-1];
	else cout<<n<<' '<<a[n-1];
}

