#include<iostream>
#include<cmath>
using namespace std;//�D�@���G����{�� ax2+bx+c=0 ����
int main()
{
	int a,s,d,f,g;
	while(cin>>a>>s>>d)
	{
		if((s*s)>(4*a*d))
		{
			cout<<"Two different roots x1=";
			g=s*s-4*a*d;
			f=(sqrt(g)-s)/2/a;
			cout<<f;
			f=(-sqrt(g)-s)/2/a;
			cout<<" , x2="<<f<<endl;
		}
		if((s*s)==(4*a*d))
		cout<<"Two same roots x="<<-1*s/2/a<<endl;
		if((s*s)<(4*a*d))
		cout<<"No real root";
	}
	return 0;	
 } 
