#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a;
	while(cin>>a)
	{
		int s[a];
		for(int q=0;q<a;q++)
		cin>>s[q];
		sort(s,s+a);
		for(int q=0;q<a-1;q++)
		cout<<s[q]<<" ";
		cout<<s[a-1]<<endl;
	}
}
