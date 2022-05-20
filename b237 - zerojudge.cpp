#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int a=2000000,sum=0;
	for(int q=2;q<=a;q++)
	{
		int k=0;
		for(int w=2;w<=sqrt(q);w++)
		{
			if(q%w==0)
			{
				k++;
				break;
			}
		}
		if(!k)
		sum+=q;
	}
	cout<<sum;
}
