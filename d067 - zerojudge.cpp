#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int a;
	cin>>a;
	if(a%400==0) cout<<"a leap year\n";
	else if(a%100==0) cout<<"a normal year\n";
	else if(a%4==0) cout<<"a leap year\n";
	else cout<<"a normal year\n";
}

