#include<iostream>
using namespace std;
int main()
{
	int a,s,d;
	while(cin>>a>>s)
	{
		if(a*s!=1)
		{
			cout<<a*s-1<<endl;
		}
		else
		{
			cout<<1<<endl;
		}
		
	}
	return 0;
}
