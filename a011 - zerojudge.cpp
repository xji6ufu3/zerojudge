#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
	char a[500];
	int kk;
	while(cin.getline(a,500)){
		kk=0;
		for(int c=1;c<strlen(a);c++){
			if(isalpha(a[c])>=1&&isalpha(a[c-1])==0)
			kk++;
		}
		cout<<kk+1<<endl;
	}
}
