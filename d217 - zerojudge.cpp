#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;

int main(){
	int n;
	while(cin >> n && n != -1){
		string a,b; cin >> a >> b;
		set<char> x;
		for(int q=0;q<a.size();q++)	x.insert(a[q]);
		int han = 0; 
		int fndb[26] = {};
		for(int q=0;q<b.size();q++){
			if(fndb[b[q] - 'a']) continue;
			fndb[b[q] - 'a'] = 1;
			if(find( x.begin() , x.end() , b[q] ) == x.end())
				han++;
			else x.erase(b[q]);
			if(x.empty()) break;
		}
		cout << "Round " << n << '\n';
		if(x.empty() && han < 7)
			cout << "You win.\n";
		else if(x.size() && han < 7)
			cout << "You chickened out.\n";
		else 
			cout << "You lose.\n";
	}
	return 0;
}
