#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	string a;
	while(getline(cin,a))
	{
		stringstream s(a);
		int sum=0;
		int d;
		char f='0';
		while(s>>d)
		{
			sum+=d;
			cout<<sum<<endl;
		}
		cout<<sum<<endl;
	}
	return 0;
}
