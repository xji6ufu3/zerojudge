#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int q=0;q<a;q++)
	{
		int s,z=0;
		cin>>s;
		double d[s];
		for(int w=0;w<s;w++)
			cin>>d[w];
		sort(d,d+s);
		for(int e=s-1;e>=0;e--)
		{
			if((d[e-1]+d[e-2])>d[e])
			{
				double f=(d[e]+d[e-1]+d[e-2])/2;
				cout<<fixed<<setprecision(2)<<sqrt(f*(f-d[e])*(f-d[e-1])*(f-d[e-2]))<<endl;
				z=0;
				break;
			}
			else
			z=1;
		}
		if(z==1)
		cout<<0.00<<endl;
		z=0;
	 } 
	 return 0;
}
