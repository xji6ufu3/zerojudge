#include<iostream>
#include<map>
#include<sstream>
using namespace std;
int main()
{
	map<string,int>m;
	int a;	
	map<string,int>::iterator it;
	cin>>a;
	string s,d;
	getline(cin,s);
	for(int q=0;q<a;q++)
	{
		getline(cin,s);
		stringstream ss(s);
		ss>>d;
		if(m.find(d)==m.end())
		m[d]=1;
		else
		m[d]++;    
	}

	for(it=m.begin();it!=m.end();it++)
	cout<<it->first<<" "<<it->second<<endl;
}
