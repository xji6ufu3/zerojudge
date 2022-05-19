#include<iostream>
#include<cmath>
#define mmm 46341
#define asd 4792
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	bool prime[mmm];
	int pp[asd];
	for(int q=0;q<mmm;q++)
	prime[q]=1;
	prime[0]=prime[1]=0;
	int k=0;
	for(int q=0;q<mmm;q++)
	{
		if(prime[q])
		{	
			pp[k]=q;
			k++;
			for(int w=q*q;w<mmm;w+=q)
			prime[w]=0;
		}
	}
	int a;
	while(cin>>a)
	{
		k=0;
		for(int q=0;q<asd;q++)
		{
			if(pp[q]>sqrt(a))
			break;
			else
			{
				if(a%pp[q]==0)
				{
					k=1;	
					break;
				}
			}
		}
		if(k)
		cout<<"非質數\n";
		else
		cout<<"質數\n";
	}
 }
