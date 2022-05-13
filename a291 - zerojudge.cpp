#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int a[4],n,asd[4];
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>n)
	{
		for(int e=0;e<n;e++)
		{
			for(int q=0;q<4;q++)
			asd[q]=a[q];
			int aa=0,bb=0,t[4];
			cin>>t[0]>>t[1]>>t[2]>>t[3];
			for(int q=0;q<4;q++)
			{
				if(t[q]==asd[q])
				{
					asd[q]=-1;
					aa++;
					t[q]=-2;
				}
			}
//			for(int q=0;q<4;q++)
//			cout<<t[q]<<" ";cout<<" , ";
//			for(int q=0;q<4;q++)
//			cout<<asd[q]<<" ";cout<<'\n';
			for(int q=0;q<4;q++)
			{
				for(int w=0;w<4;w++)
				{
					if(t[q]==asd[w])
					{
						bb++;
						asd[w]=-1;
						break;
					}
				}
			}
//			for(int q=0;q<4;q++)
//			cout<<t[q]<<" ";cout<<" , ";
//			for(int q=0;q<4;q++)
//			cout<<asd[q]<<" ";cout<<'\n';
			cout<<aa<<"A"<<bb<<"B\n";
		}
	}
}
