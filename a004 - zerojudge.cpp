#include<iostream>
using namespace std;
int main()
{
	int a,s,d=0;
	while(cin>>a)
	{
	if((a%4==0)and(a%100!=0)or(a%400==0))
	cout<<"¶|¦~"<<endl;
	else
	cout<<"¥­¦~"<<endl; 
	}
	return 0;
 }
