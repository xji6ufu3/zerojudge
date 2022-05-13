#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,s,d=0,sum=0;
	while(cin>>a>>s)
	{
		do
		{
			sum+=a;
			d++;
			a++;
		}while(sum<=s);
		cout<<d<<endl;
		d=0;
		sum=0;
	}
	return 0;
}
