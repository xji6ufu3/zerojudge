#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int q=0;q<a;q++)
	{
		long long int asd=1;
		string s;
		cin>>s;
		for(int w=0;w<s.size();w++)
		{
			asd*=(s[w]-'0');
		}
		cout<<asd<<endl;
	}
 } 
