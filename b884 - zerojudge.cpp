#include<iostream>
using namespace std;
string ha(double yee)
{
	if(yee>0 and yee<=30) return "sad!\n";
	else if(yee>30 and yee<=60) return "hmm~\n";
	else if(yee>60 and yee<100) return "Happyyummy\n";
	return "evil!!\n";
}
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	double a,s,d,yee;
	cin>>d;
	for(int q=0;q<d;q++)
	{
		cin>>a>>s;	
		yee=100-a-s;
		cout<<ha(yee);
	}
}

