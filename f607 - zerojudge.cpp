// f607 - zerojudge 
#include<iostream>
#include<algorithm>
#include<set>
#define ll long long
using namespace std;
set<int> s;
struct stru{
	int site;
	int order;
}l[200005];
bool cmp(stru a,stru b){
	return a.order<b.order;
}
int main(){
	ios::sync_with_stdio(0);
	int n,lon;
	while(cin>>n>>lon){
		ll int sum=0;
		int mid,right=n,left=0;
		for(int q=0;q<n;q++) cin>>l[q].site>>l[q].order;
		sort(l,l+n,cmp);
//		for(int q=0;q<n;q++) cout<<l[q].site<<" ";
		set<int>::iterator setit;
		s.insert(0);
		s.insert(lon);
		for(int q=0;q<n;q++){
			setit=s.lower_bound(l[q].site);
//			cout<<q+1<<": "<<*setit;
			sum+=*setit;
			setit--;
//			cout<<" - "<<*setit<<'\n';
			sum-=*setit;
			s.insert(l[q].site);						
		}
		cout<<sum;
	}
	return 0;
} 
