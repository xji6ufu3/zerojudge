#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a--)
	{
		int s;
		cin>>s;
		int d[s];
		for(int q=0;q<s;q++)
		cin>>d[q];
		int sum=0,bigsum=d[0];
		for(int q=0;q<s;q++)
		{
			if(sum<0)
			sum=d[q];
			else
			sum+=d[q];
			if(bigsum<sum)
			bigsum=sum;
		}
		cout<<bigsum<<endl;
	}
	return 0;
}
