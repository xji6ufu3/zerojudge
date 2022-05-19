#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	string q;
	int sum,a;
	while(getline(cin,q))
	{
		sum=0;
		stringstream w;
		w<<q;
		while(w>>a)
		{
			sum+=a;	
		}	
		cout<<sum<<endl;
	}
	return 0;
}
