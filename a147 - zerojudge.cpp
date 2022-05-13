#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a;
	while(cin>>a)
	{
		int d=a-1;
		for(int q=1;q<a-1;q++)
		{
			if(q%7!=0)
			{
				cout<<q<<" ";
			}	
		}
		if(((a-1)%7!=0)and(a>=1))
		cout<<d<<endl;
		else
		break;	
	}
	return 0;
}
