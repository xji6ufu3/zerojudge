#include<iostream>
#include<map>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	long long int n,count;
	string str;
	while(cin>>n){
		count = 1;
		map<string,long long int> m;
		while(n--){
			cin>>str;
			if(m.count(str)) cout<<"Old! "<<m[str]<<'\n'; // if���str�s�b�Am.count(str)�^��1�A�_�h0 
			else{
				cout<<"New! "<<count<<'\n';
				m[str] = count;
				count++;
			}
		}
	}
	return 0;
}

