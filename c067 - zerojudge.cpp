#include<iostream>
using namespace std;
int main()
{
	int s,d,h=0;
	while(cin>>s)
	{
		h+=1;
		int a[s]={},f=0,g=0;
		if(s!=0)
		cout<<"Set #"<<h<<endl;
		else
		break;
		for(int q=0;q<s;q++)
		{
			cin>>d;
			a[q]=d;
			f+=d;
		}
		f/=s;
		for(int q=0;q<s;q++)
		{
			if(a[q]>=f)
			g=g+a[q]-f;
		}
		cout<<"The minimum number of moves is "<<g<<"."<<endl;
		cout<<endl;
	 } 
	 return 0;
}
