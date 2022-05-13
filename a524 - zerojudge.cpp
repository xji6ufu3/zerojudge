#include<iostream>
using namespace std;
int n;
void go(int a[],int s,bool b[])
{
	if(s==n)
	{
		for(int q=0;q<n;q++)
		cout<<a[q];
		cout<<'\n';
		return;
	}
	for(int q=0;q<n;q++)
	{
		if(b[q])
		{
			b[q]=0;
			a[s]=n-q;
			go(a,s+1,b);
			b[q]=1;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie();
	while(cin>>n)
	{
		int a[n];
		bool b[n];
		for(int q=0;q<n;q++) b[q]=1;
		go(a,0,b);
	}
	return 0;
}

