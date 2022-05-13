#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,s,d,f;
	cin>>a>>s>>d;
	f=(a+s+d)/2;
	cout<<f*(f-a)*(f-s)*(f-d)<<endl;
	return 0;
}
