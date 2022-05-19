#include<bits/stdc++.h>
using namespace std;
int n;
int arr[6];
bool visit[6]={false};
void dfs(int s,int a[],int start)
{
	if(s==6)
	{
		for(int q=0;q<5;q++)
		cout<<arr[q]<<" ";
		cout<<arr[5]<<'\n';	
		return;
	}
	for(int q=start;q<n;q++)
	{
		/*if(visit[q])
		continue;
		visit[q]=true;*/
		arr[s]=a[q];
		dfs(s+1,a,q+1);//¤£¬Ostart+1 
		//visit[q]=false;
	}
}
int main()
{
	int f=0;
	while(cin>>n and n!=0)
	{
		if(f)
		cout<<'\n';
		int a[30];	
		for(int q=0;q<n;q++)
		cin>>a[q];
		sort(a,a+n);
		dfs(0,a,0);
		f=1;
	}
}
