#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a;
	cin>>a;
	cout<<((a>0)-(a<0))<<endl;
	return 0;
}
//假設輸入a=1,s=2兩數，關係運算子輸出:{a==b}>>0;{a!=b}>>1;{a<b}>>1。以此類推，正確輸出1，不正確輸出0。 
