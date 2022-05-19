#include<iostream>
using namespace std;
int main()
{
	string a,s;
	while(getline(cin,a))
	{
		s=a;
		for(int q=a.size()-1,z=0;q>=0;q--,z++)
		{
			a.at(z)=s.at(q);
		}
		if(a==s)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}
	
	return 0;
}
