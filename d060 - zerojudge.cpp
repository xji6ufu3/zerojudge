#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	cout<<(60 - (a + 35) % 60) % 60;
}
