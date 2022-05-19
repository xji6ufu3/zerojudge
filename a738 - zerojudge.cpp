#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int s)
{ 
    if(s) return gcd(s,a%s);
    return a; 
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,s;
	while(cin>>a>>s) cout<<gcd(a,s)<<'\n';
 }
