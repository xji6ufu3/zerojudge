#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,d,fir=0,sum=0,a[3];
	cin>>n>>d;
	for(int w=0;w<n;w++)
	{
		for(int q=0;q<3;q++)
		cin>>a[q];
		sort(a,a+3);
		if((a[2]-a[0])>=d)
		{
			fir++;
			sum+=((a[0]+a[1]+a[2])/3);
		}
	}
    cout<<fir<<' '<<sum;
}
