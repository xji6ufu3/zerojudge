#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int>qq;
	int a,s,d;
	cin>>a;
	for(int q=0;q<a;q++)
	{
		cin>>s;
		if(s==1)
		{
			cin>>d;
			qq.push(d);  
		} 
		if(s==2)
		{
			if(qq.size()!=0)
			cout<<qq.front()<<endl;
			else
			cout<<-1<<endl;
		}
		if(s==3)
		{
			if(qq.size()!=0)
			qq.pop();
		}
	}
 }
