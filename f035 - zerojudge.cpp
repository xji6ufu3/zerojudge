#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	string s;
	getline(cin,s);
	for(int q=0;q<s.size()-1;q++)
	cout<<(int)s[q]<<"_";
	cout<<(int)s[s.size()-1];
}
