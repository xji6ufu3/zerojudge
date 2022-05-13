#include<iostream>
#include<set>
#include<cmath>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	int n,num,sum,a,b;
	set<int> s;
	set<int>::iterator iter;
	cin>>n;
	for(int q=0;q<n;q++){
		cin>>num;
		iter=s.lower_bound(num);
		if(!q) sum=num;
		else if(iter==s.end()){
			iter--;
			sum+=num-*iter;
//			cout<<*iter<<'\n';
		}
		else{
			a=*iter;
			if(iter!=s.begin()) iter--;
			b=*iter;
			sum+=min(abs(num-a),abs(num-b));
//			cout<<a<<":"<<b<<'\n';
		}
		s.insert(num);
	}
	cout<<sum;
	return 0;
}
