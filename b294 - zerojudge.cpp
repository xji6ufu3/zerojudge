#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,sum=0,s;
	cin>>a;
	for(int q=1;q<=a;q++)
	{
		cin>>s;
		sum+=s*q;
	}
	cout<<sum;
 }
