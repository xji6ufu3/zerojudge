#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int x=0, y=0;
    for (int i=0;i<n;i++)
	{
        int a,b;
        cin >> a;
        cin >> b;
        if (a==0) x=x+b;
        else if(a==1) y=y+b;
        else if(a==2) x=x-b;
        else if(a==3) y=y-b;
    }
    cout<<y<<" "<<x<<'\n';
}
