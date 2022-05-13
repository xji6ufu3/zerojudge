#include<iostream>
#include<queue>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	int n,num,a,b,cost;
	while(cin>>n and n){
		cost=0;
		priority_queue<int,vector<int>,greater<int> > prique;
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
