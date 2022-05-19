#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	string a;
	while(getline(cin,a))
	{
		stringstream sl(a);
		int z;
		double x,sum1=0,sum2=0;
		char c;
		while(sl>>z>>c>>x)
		{
			if(z%2==0)
			sum2+=x;
			else
			sum1+=x;
		}
		cout<<sum1-sum2<<endl;
	}
	return 0;
 }
