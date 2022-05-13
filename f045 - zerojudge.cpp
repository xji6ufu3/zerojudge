#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	string s;
	cin>>s;
	int a[9],sum=0;
	for(int q=0;q<9;q++) a[q]=s[q]-'0';
	for(int q=0;q<3;q++) sum=sum*10+a[q+6];
	sort(a,a+9);
	if(a[7]*a[7]+a[8]*a[8] == sum) cout<<"Good Morning!";
	else cout<<"SPY!";
}

