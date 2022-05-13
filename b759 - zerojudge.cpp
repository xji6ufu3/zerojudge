#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	string a;
	cin>>a;
	int k=0;
	for(int q=0;q<a.size();q++)
	{
		k=q;
		for(int w=0;w<a.size();w++)
		{
			if(k==a.size()) k=0;
			cout<<a[k];
			k++;
		}
		cout<<'\n';
	}
}

