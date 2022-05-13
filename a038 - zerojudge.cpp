#include<iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int k;
	for(int q=a.size()-1;q>=0;q--)
	{
		if(a[q]!='0')
		{
			k=q;	
			break;
		}
	}
	for(int q=k;q>=0;q--)
	{
		cout<<a[q];
	}
}
