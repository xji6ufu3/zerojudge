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
			if(m.count(str)) cout<<"Old! "<<m[str]<<'\n'; // if鍵值str存在，m.count(str)回傳1，否則0 
			else{
				cout<<"New! "<<count<<'\n';
				m[str] = count;
				count++;
			}
		}
	}
	return 0;
}

