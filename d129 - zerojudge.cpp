#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<long long int> a;//�]�̲׵��׶W�Lint���W���A�ҥH�n��long long int 
	a.insert(1); 
	set<long long int>::iterator it=a.begin();//*** it�n���]��begin 
	while(a.size()<2500)
	{
		a.insert(*it*2);
		a.insert(*it*3);
		a.insert(*it*5);
		it++;   
	}
	vector<int> v(a.begin(),a.end());//set�ഫ��vector�A�Y�i�Ϋ��� 
	cout << "The 1500'th ugly number is "<<v[1499]<<".";
 }
