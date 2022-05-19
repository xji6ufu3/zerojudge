#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a--)
	{
		double s,d;
		long double kk;
		cin>>s>>d;
		if(s>d)
		{
			kk=(d-s)/s;
			if(kk>0)
			kk+=0.0000001;
			else if(kk<0)
			kk-=0.0000001;
			cout<<fixed<<setprecision(2)<<kk*100<<"%";
			if(kk*100<=-7)
			{
				cout<<" dispose"<<endl;
			}
			else 
			cout<<" keep"<<endl;
		}
		else
		{
			kk=(d-s)/s;
			if(kk>0)
			kk+=0.0000001;
			else if(kk<0)
			kk-=0.0000001;
			cout<<fixed<<setprecision(2)<<kk*100<<"%";
			if(kk*100>=10)
			{
				cout<<" dispose"<<endl;
			}
			else 
			cout<<" keep"<<endl;
		}
	}
}
