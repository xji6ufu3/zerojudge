#include<iostream>
#include<vector>
#include<sstream>
#include<cmath>
using namespace std;
int main()
{
	long long int a,f,g;
	while(cin>>a)
	{
		f=a*(a+1)/2;
		g=(a)*(a+1)*(a+2)/6;
		cout<<f<<" "<<g<<endl; 
	}
 }
