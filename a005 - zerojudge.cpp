#include<iostream>
using namespace std;
int main()
{
	int a,s,d,f,g,h;
	cin>>h;
		while(h>0)
		{
			cin>>a>>s>>d>>f;
		
				if((s-a==d-s))
				cout<<a<<" "<<s<<" "<<d<<" "<<f<<" "<<f+s-a<<endl;
				else if((s%a==0)and(d%s==0))
				{
				g=s/a;
				cout<<a<<" "<<s<<" "<<d<<" "<<f<<" "<<f*g<<endl;
					
				}
				h=h-1;
		

	}
	return 0;
}
