#include<iostream>
using namespace std;
int main()
{
	int a,s;
	while(cin>>a>>s)
	{
		int d[a]={},f,g,h,sum[a]={};
		for(int q=0;q<a;q++)
		{
			cin>>f;
			d[q]=f;
		}
		for(int q=0;q<a;q++)
		{
			sum[q]=sum[q-1]+d[q];
		}
		for(int q=0;q<s;q++)
		{
			cin>>g>>h;
			cout<<sum[h-1]-sum[g-2]<<endl;
		}
	}
	return 0;
}
