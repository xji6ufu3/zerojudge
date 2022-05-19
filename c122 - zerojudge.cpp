#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
	int a;
	set<long long int> s;
	set<long long int>::iterator it;
	s.insert(1) ;
	it=s.begin() ;
	while(s.size()<7000)
	{
		s.insert(*it*2);
		s.insert(*it*3);
		s.insert(*it*5);
		s.insert(*it*7);
		it++;    
	}
	vector <long long int>v(s.begin(),s.end());
	while(cin>>a)
	{
		if(a==0)
		break;
		cout<<"The "<<a;
		if((a%10==1)and(a%100)!=11)
		cout<<"st ";
		else if((a%10==2)and(a%100!=12))
		cout<<"nd ";
		else if((a%10==3)and(a%100!=13))
		cout<<"rd ";
		else
		cout<<"th ";
		cout<<"humble number is "<<v[a-1]<<"."<<endl;
	}
 }
