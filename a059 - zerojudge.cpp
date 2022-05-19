#include <iostream>
#include <cmath>
using namespace std;
int t,a,b,s;
int main(void) {
	cin>>t;
    for(int i=1;i<=t;i++){
    	cin>>a>>b;
    	s=0;
    	for(int j=a;j<=b;j++){
    		for(int k=1;k<=sqrt(j);k++){
    			if(j==k*k)
    			  s=s+j;
    		}
    	}
    	 cout<<"Case "<<i<<": "<<s<<endl;
    }
	return 0;
}
