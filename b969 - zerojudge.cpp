#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	string s,ss;
	getline(cin,s);
	getline(cin,ss);
	stringstream sa(s);
	while(sa>>s)
	cout<<ss<<", "<<s<<'\n';
}

