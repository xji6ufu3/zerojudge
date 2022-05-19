#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<int> v;
vector<int>::iterator it;
void dfs(int x, int layer) 
{
    v.push_back(x);
	if(layer == n) 
	{
		for(int i = 1; i <= n; i++) 
			printf("%d ",v[i]); 
		printf("\n");
		v.pop_back();
 		return; 
	}
	bool b;
	for(int q=0;q<n;q++)
	{
		it=find(v.begin(),v.end(),q+1);
		if(it==v.end())
		dfs(q+1,layer+1);
	}
	v.pop_back();
} 
 
int main() { 
    scanf("%d",&n);
	dfs(0,0); 
}
