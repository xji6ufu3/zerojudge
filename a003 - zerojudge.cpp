#include<iostream>
using namespace std;
int main()
{
	int a,s,d=0;
	while(cin>>a>>s)
	{
		d=(a*2+s)%3;
	
	if (d==0)
	cout<<"´¶³q"<<endl;
	else if(d==1)
	cout<<"¦N"<<endl;
	else
	cout<<"¤j¦N"<<endl; 
	}
	return 0;
 }
