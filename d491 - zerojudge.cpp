#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,s,sum=0;
	cin>>a>>s;
	if(a>=s)
	{
		for(int q=s;q<=a;q++)
		{
			if(q%2==0)
			{
				sum+=q;
			}
		}
		cout<<sum;
	}
	else
	{
		for(int q=a;q<=s;q++)
		{
			if(q%2==0)
			{
				sum+=q;
			}
		}
		cout<<sum;
	}
}
