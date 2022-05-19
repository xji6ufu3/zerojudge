#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	int a,s;
	cin>>a;
	int d[a];
	map<int,int>aa;
	map<int,int>::iterator iter;
	for(int q=0;q<a;q++)
	{
		cin>>s;
		d[q]=s;
		aa[s]++;
	}
	sort(d,d+a);
	unique(d,d+a);//去除重複單元 
	for(int q=0;q<aa.size();q++)
	cout<<d[q]<<" "<<aa[d[q]]<<endl;
	return 0;
}
