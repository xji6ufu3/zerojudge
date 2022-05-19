#include<iostream>
using namespace std;
int main()
{
	long long int a,s;
	while(cin>>a>>s){
		if(a>s)
	cout<<a-s<<endl;
	else if(a<s)
	cout<<s-a<<endl;
	else
	cout<<0<<endl;
	}
	
	return 0;
}
