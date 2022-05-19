#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	while(cin>>n>>m)
	{
		int a[n][n],x1,x2,y1,y2;
		long long s[n][n];
		for(int q=0;q<n;q++)
		{
			for(int w=0;w<n;w++)
			{
				cin>>a[q][w];
				if(q==0 and w==0)
				s[q][w]=a[q][w];
				else if(q==0 and w>0)
				s[q][w]=s[q][w-1]+a[q][w];
				else if(q>0 and w==0)
				s[q][w]=s[q-1][w]+a[q][w];
				else if(q>0 and w>0)
				s[q][w]=s[q-1][w]+s[q][w-1]-s[q-1][w-1]+a[q][w];
			}
		}
//		for(int q=0;q<n;q++)
//		{
//			for(int w=0;w<n;w++)
//			cout<<s[q][w]<<" ";
//			cout<<'\n';
//		}
		for(int q=0;q<m;q++)
		{
			cin>>x1>>y1>>x2>>y2;
			x1--;
			x2--;
			y1--;
			y2--;
			if(x1==0 and y1==0)
			cout<<s[x2][y2];
			else
			{
				if(x1==0)
				{
					cout<<s[x2][y2]-s[x2][y1-1];
				}
				else if(y1==0)
				{
					cout<<s[x2][y2]-s[x1-1][y2];
				}
				else 
				{
					cout<<s[x2][y2]-s[x2][y1-1]-s[x1-1][y2]+s[x1-1][y1-1];
				}
			}
			cout<<'\n';
		}
    }
}
