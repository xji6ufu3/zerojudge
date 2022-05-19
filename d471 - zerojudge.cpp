#include<iostream>
using namespace std;
int a;
bool b[100];
void f(bool b[],int s)
{
	if(s==a-1) 
	{
		for(int q=0;q<a-1;q++) cout<<b[q];
		cout<<b[a-1]<<'\n';
		return;	
	}
	b[s+1]=0;
	f(b,s+1);
	b[s+1]=1;
	f(b,s+1);
}
int main()
{
	while(cin>>a) f(b,-1);
}
