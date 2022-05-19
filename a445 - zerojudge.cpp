#include<cstdio>
using namespace std;
int parent[10005];
int fin(int a)
{
	if(a==parent[a])
	return a;
	else
	return parent[a]=fin(parent[a]);
 } 
int main()
{
	int n,m,q,z,x;
	scanf("%d%d%d",&n,&m,&q);
	for(int w=1;w<=n;w++)
	parent[w]=w;
	for(int w=0;w<m;w++)
	{
		scanf("%d%d",&z,&x);
		parent[fin(z)]=fin(x);
	}
	for(int w=0;w<q;w++)
	{
		scanf("%d%d",&z,&x);
		if(fin(z)==fin(x))
		puts(":)");
		else
		puts(":(");
	}
	return 0;
}
