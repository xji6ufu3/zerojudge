#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	string s,sd[50];
	int a,f=0;
	getline(cin,s);
	cin>>a;
	stringstream ss(s);
	while(ss>>s)
	{
		sd[f]=s;
		f++;
	}
	cout<<sd[f-a];
}
