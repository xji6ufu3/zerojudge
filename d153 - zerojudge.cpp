#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int q=0;q<a;q++)
	{
		int s,d;
		cin>>s;
		int f[s];
		for(int w=0;w<s;w++)
			cin>>f[w];
		sort(f,f+s);
		if(s%2==0)
		{
			s=s/2;
			if(f[s]>f[s-1])
			cout<<f[s-1]<<endl;
			else
			cout<<f[s]<<endl;
		}
		else
		{
			s=s/2+1;
			cout<<f[s-1]<<endl;
		}
	}
	return 0;
 }
