#include<iostream>
#include<vector>
#include<sstream>
#include<cmath>
using namespace std;
int main()
{
	int a,s,d,qq,dd,sum,df;
	cin>>a>>s;
	vector<int>v;
	vector<int>::iterator it;
	for(int q=a;q<=s;q++)
	{
		d=log10(q)+1;
		//cout<<" A:"<<d<<" ";
		df=d;
		qq=q;
		sum=0;
		while(df)
		{
			df--;
			dd=qq%10;
			qq/=10;
			sum+=pow(dd,d);
		}
		if(sum==q)
		v.push_back(q); 
	}
	if(v.size()==0)
	cout<<"none";
	else
	{
		for(it=v.begin();it!=v.end()-1;++it)
		cout<<*it<<" ";
		cout<<*it;
	}
 }
