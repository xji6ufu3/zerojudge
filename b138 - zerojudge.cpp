#include<iostream>
using namespace std;
int main()
{
	int a,s,w=0;
	int z[10]={};
	for(int q=0;q<=9;q++)
	{
		cin>>a;
		z[q]=a;
	}
	cin>>s;
	s+=30;
	for(int q=0;q<=9;q++)
	{
		if(s>=z[q])
		w++;
	}
	cout<<w<<endl;
	return 0;
 }
