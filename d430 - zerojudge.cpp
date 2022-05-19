#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	string a;
	int sum=0,d,f,g;
	while(getline(cin,a))
	{
		stringstream s(a);
		while(s>>a)
		{
			d=a.length();
			for(int q=0;q<d;q++)
			{
				if(isdigit(a.at(q)) or isalpha(a.at(q)))
				f=1;
			}
			if(f==1)
			sum++;
			f=0;
		}
	}
	cout<<sum<<endl;
	sum=0;
	return 0;
 }
