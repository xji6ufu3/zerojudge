#include<bits/stdc++.h>
using namespace std;
int main()
{
	int R,C,k,m;
	cin>>R>>C>>k>>m;
	int x[R][C];
	for(int q=0;q<R;q++)
	{
		for(int w=0;w<C;w++)
		{
			cin>>x[q][w];
		}
	} 
	for(int q=0;q<m;q++)
	{
		int xx[R][C];
		for(int w=0;w<R;w++)
		{
			for(int e=0;e<C;e++)
			{
				xx[w][e]=x[w][e];
			}
		} 
		for(int w=0;w<R;w++)
		{
			for(int e=0;e<C;e++)
			{
				int as=xx[w][e];
				if(x[w][e]!=-1)
				{
					if(w>0 and x[w-1][e]!=-1)
					{
						x[w][e]-=as/k;
						x[w][e]+=xx[w-1][e]/k;
					}
					if(w<R-1 and x[w+1][e]!=-1)
					{
						x[w][e]-=as/k;
						x[w][e]+=xx[w+1][e]/k;
					}
					if(e>0 and x[w][e-1]!=-1)
					{
						x[w][e]-=as/k;
						x[w][e]+=xx[w][e-1]/k;
					}
					if(e<C-1 and x[w][e+1]!=-1)
					{
						x[w][e]-=as/k;
						x[w][e]+=xx[w][e+1]/k;
					}
				}
			}
		}
	}
	int as=x[0][0],asa=as;
	for(int q=0;q<R;q++)
	{
		for(int w=0;w<C;w++)
		{
			if(as<x[q][w])
			as=x[q][w];
			if(asa>x[q][w] and x[q][w]!=-1)
			asa=x[q][w];
		}
	}
	cout<<asa<<'\n'<<as;
 }
