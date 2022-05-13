#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	while(cin>>n>>m)
	{
		bool a[n][n]={};
		int z,zz,x,xx;
		for(int q=0;q<m;q++)
		{
			if(q==0)
			{
				cin>>z>>x;
			}
			else
			{
				cin>>zz>>xx;
				if(z==zz)
				{
					if(x<xx) for(int w=x-1;w<xx;w++) a[z-1][w]=1;
					else for(int w=xx-1;w<x;w++) a[z-1][w]=1;
				}
				else if(x==xx)
				{
					if(z<zz) for(int w=z-1;w<zz;w++) a[w][x-1]=1;
					else for(int w=zz-1;w<z;w++) a[w][x-1]=1;
				}
				x=xx;
				z=zz;
			}
		}
		for(int q=0;q<n+2;q++) cout<<"-";
		cout<<'\n';
		for(int q=0;q<n;q++)
		{
			cout<<"|";
			for(int w=0;w<n;w++)
			{
				if(a[q][w]) cout<<"*";
				else cout<<" ";
			}
			cout<<"|\n";
		}
		for(int q=0;q<n+2;q++) cout<<"-";
		cout<<'\n';
	}
}

