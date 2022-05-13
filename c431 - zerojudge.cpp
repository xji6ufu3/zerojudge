#include<stdio.h>
using namespace std;
int main()
{
//	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int b[100]={};
	int a,n;
	scanf("%d",&n);
	for(int q=0;q<n;q++)
	{
		scanf("%d",&a);
		b[a-1]++;
	}
	for(int q=0;q<100;q++)
	{
		for(int w=0;w<b[q];w++)
		printf("%d ",q+1);
	}
}

