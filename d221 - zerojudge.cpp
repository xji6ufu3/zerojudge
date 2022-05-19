#include<iostream>
#include<queue>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	int n,num;
	ll int a,b,cost=0;
	while(cin>>n and n){
		cost=0;
		priority_queue<ll int,vector<ll int>,greater<ll int> > prique;
		for(int q=0;q<n;q++){
			cin>>num;
			prique.push(num);
		}
		for(int q=0;q<n-1;q++){
			a=prique.top();
			prique.pop();
			b=prique.top();
			prique.pop();
			cost+=a+b;
			prique.push(a+b);
		}
		cout<<cost<<'\n';
	}
	return 0;
}
