#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n]={},s,k=0;
	stack<int> v;
	for(int q=0;q<3;q++)
	{
		cin>>s;
		a[s-1]=1;
	}
	for(int q=0;q<n;q++)
		if(!a[q]) v.push(q+1);
	while(v.size()-1)
	{
		cout<<"No. "<<v.top()<<'\n';
		v.pop();
	}
	cout<<"No. "<<v.top();
}
