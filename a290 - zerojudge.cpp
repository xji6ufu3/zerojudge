#include<iostream>
#include<cstdio>
#include<queue>
#include<memory.h>
using namespace std;
bool vis[10005]={};
vector<int> ans,v[850];
void bfs(int a,vector<int> v[])
{
	queue<int>Q;
	Q.push(a);
	while(Q.size())
	{
		int s=Q.front();
		Q.pop();
		vis[s]=1;
		ans.push_back(s);
		for(int x:v[s])
		{
			if(vis[x])
			continue;
			else
			{
				ans.push_back(x);
				vis[x]=1;
				Q.push(x); 
			}
		}
	}
}
int main()
{
	int a,s,n,m;
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	while(cin>>n>>m)
	{
		while(m--)
		{
			cin>>a>>s;
			v[a].push_back(s); 
		}
		cin>>a>>s;
		bfs(a,v);
		bool b=1;
		for(int q=0;q<ans.size();q++)
		{
			if(ans[q]==s)
			{
				b=0;
				printf("Yes!!!\n");
				break;
			} 
		}
		if(b)
		printf("No!!!\n");
		memset(vis,0,sizeof(vis));
		ans.clear();
		for(int q=0;q<n+2;q++)
		v[q].clear();
	}
}
