#include<iostream>
#include<vector>
#include<cstdio>
#include<set>
using namespace std;
int n,m,l,Q,a,s;
vector<int> v[10005];
int bad[10005];
set<int> ans;
void dfs(int i)
{
	if(ans.find(i)==ans.end())
	{ 
		ans.insert(i);
		for(int x=0;x<v[i].size();x++)
		dfs(v[i][x]);
	} 
}
int main()
{
	scanf("%d%d%d%d",&n,&m,&l,&Q);
	for(int q=0;q<m;q++)
	{
		scanf("%d%d",&a,&s);
		v[a].push_back(s); 
	}
	for(int q=0;q<l;q++)
	{
		scanf("%d",&a);
		dfs(a);
	}
	while(Q--)
	{
		scanf("%d",&a);
		if(ans.find(a)!=ans.end())
		printf("TUIHUOOOOOO\n");
		else
		printf("YA~~\n");
	}
}
