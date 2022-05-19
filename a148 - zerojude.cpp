#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
        cin.tie(0);
	int a;
	while(cin>>a)
	{
		int s[a],sum=0;
		for(int q=0;q<a;q++)
		{
			cin>>s[q];
			sum+=s[q]-59;
		}
		if(sum<=0) cout<<"yes\n";
		else cout<<"no\n";
	}
 }
