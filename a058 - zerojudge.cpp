#include<iostream>
using namespace std;
int main()
{
	int a,s,asd=0,aasd=0,aaasd=0;
	cin>>a;
	for(int q=0;q<a;q++)
	{
		cin>>s;
		if(s%3==0)
		asd++;
		else if(s%3==1)
		aasd++;
		else
		aaasd++;
	}
	cout<<asd<<" "<<aasd<<" "<<aaasd<<endl;
}
