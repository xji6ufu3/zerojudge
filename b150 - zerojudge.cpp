#include<iostream>
using namespace std;
int main()
{
	int a[13];
	while(cin>>a[0])
	{
		int s=300,d=0,f=0,g=0;
		for(int q=1;q<12;q++)
		{
			cin>>a[q];
		}
		for(int q=0;q<12;q++)
		{
			if(q!=11)
			{
				d+=s-a[q];
				if(a[q+1]<=300+d)
				{
					f+=d/100;
					d=d-d/100*100;
				}
				if(a[q+1]>300+d)
				{
					cout<<-1*(q+1)-1<<endl;
					g=1;
					break;
				}
				
			}
			else
			d+=s-a[q];
		}
		if(g==0)
		cout<<f*1.2*100+d;
		d=0;
		f=0;
		g=0;
	}
}
