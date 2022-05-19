#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
bool Sort(int a,int s)
{
	return a>s;
}
bool prime(int a)
{
	if(a==1 or a==0) return false;
	for(int q=2;q<sqrt(a);q++)
	 if(a%q==0) return false;
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	string s;
	while(cin>>s)
	{
		int c[26]={},k;
		for(int q=0;q<s.size();q++)
		{
			c[(int)s[q]-'a']++;
			//cout<<(int)s[q]-'a'<<" ";
		}
		//cout<<'\n';
		sort(c,c+26,Sort);
		for(int q=0;q<26;q++)
		 if(c[q]==0)
		 { 
	        k=q-1;
	    	break;
		 }
		//cout<<k<<'\n';
		if(prime(c[0]-c[k])) cout<<"Lucky Word\n"<<c[0]-c[k]<<'\n';
		else cout<<"No Answer\n"<<0<<'\n';
	}
}
