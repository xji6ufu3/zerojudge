#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<long long int> a;//因最終答案超過int的上限，所以要用long long int 
	a.insert(1); 
	set<long long int>::iterator it=a.begin();//*** it要先設成begin 
	while(a.size()<2500)
	{
		a.insert(*it*2);
		a.insert(*it*3);
		a.insert(*it*5);
		it++;   
	}
	vector<int> v(a.begin(),a.end());//set轉換成vector，即可用指標 
	cout << "The 1500'th ugly number is "<<v[1499]<<".";
 }
