#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	double n,m;
	char c;
	cin>>n>>m>>c;
	if(c=='T')
	{
		if(n>=m) cout<<"T "<<n-m<<".00";
		else cout<<"No Money";
	}
	else if(c=='U')
	{
		if(n/30.9>=m) 
		{
			if(n/30.9-m==(int)(n/30.9-m)) cout<<"U "<<n/30.9-m<<".00";
			else if(n/30.9-m>=0.05) cout<<"U "<<fixed<<setprecision(2)<<n/30.9-m;
			else cout<<"U "<<"0.00";
		}
		else cout<<"No Money";
	}
	else if(c=='J')
	{
		if(n/0.28>=m) 
		{
			if(n/0.28-m == (int)(n/0.28-m)) cout<<"J "<<n/0.28-m<<".00";
			else if(n/0.28-m>=0.05) cout<<"J "<<fixed<<setprecision(2)<<n/0.28-m;
			else cout<<"J "<<"0.00";
		}
		else cout<<"No Money";
	}
	else
	{
		if(n/34.5>=m) 
		{
			if(n/34.5-m == (int)(n/34.5-m)) cout<<"E "<<n/34.5-m<<".00"; 
			else if(n/34.5-m>=0.05) cout<<"E "<<fixed<<setprecision(2)<<n/34.5-m;
			else cout<<"E "<<"0.00";
		}
		else cout<<"No Money";
	}
}

