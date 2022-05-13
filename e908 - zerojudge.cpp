#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	string s,ss[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int a,d=0;
	cin>>s>>a;
	if(s==ss[0]) d++;
	else if(s==ss[1]) d+=2;
	else if(s==ss[2]) d+=3;
	else if(s==ss[3]) d+=4;
	else if(s==ss[4]) d+=5;
	else if(s==ss[5]) d+=6;
	else d+=7;
	a%=7;
	a+=d;
	if(a>7) a-=7;
	cout<<ss[a-1];
}

