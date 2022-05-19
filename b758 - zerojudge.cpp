#include<iostream>
using namespace std;
int main()
{
	int a,s;
	scanf("%d%d",&a,&s);
	a+=2;
	s+=30;
	if(s>59)
	{
		s-=60;
		a++;
	}
	if(a>23)
	a-=24;
	if(a<10) cout<<0;
	if(s<10) cout<<a<<':'<<0<<s;
	else cout<<a<<':'<<s;
}
