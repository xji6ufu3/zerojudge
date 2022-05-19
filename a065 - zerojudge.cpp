#include<iostream>
#include<vector>
#include<sstream>
#include<cmath>
using namespace std;
int main()
{
	string a;
	while(cin>>a)
	{
		char s,d;
		for(int q=0;q<a.size()-1;q++)	
		{
			s=a[q];
			d=a[q+1];
			if(s<d)
			swap(s,d);
			cout<<s-d;
		}
		cout<<endl;
	}
 }
