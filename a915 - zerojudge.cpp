#include<iostream>
#include<algorithm>
using namespace std;
struct asd{
	int a;
	int s;
};
bool go(asd a,asd s)
{
	if(a.a==s.a) return a.s<s.s;
	return a.a<s.a;
}
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int n;
	cin>>n;
	asd a[n];
	for(int q=0;q<n;q++) cin>>a[q].a>>a[q].s;
	sort(a,a+n,go);
	for(int q=0;q<n;q++) cout<<a[q].a<<' '<<a[q].s<<'\n';
}

