#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	long long a,s;
	while(cin>>a>>s)
	cout<<a*(a+1)*s*(s+1)/4<<'\n';
}

