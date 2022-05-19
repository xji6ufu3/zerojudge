#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,s,d,sun=0,k=0;
	while(cin>>a>>s)
	{
		k++;
	if(a>s)
	{
		cout<<0<<endl;
		continue;
	}
	sun=0;
	d=a;
	while(s-d+1)
	{
		for(int q=2;q<=sqrt(d);q++)
		{
			if(d%q == 0)
			{
				sun++;
				break;
			}
		}
		d++;
	}
	if(a!=1)
	cout<<s-a-sun+1<<endl;
	else
	cout<<s-a-sun<<endl;
	}
	return 0;
}
