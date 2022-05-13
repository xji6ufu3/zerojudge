#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> NumberStack;
	string str;
	char ch;
	int sum = 0;
	int first,second;
	getline(cin,str);
	for(int i = 0;i < str.length();i++){
		ch = str[i];
		if(isdigit(ch)){
			if(str[i-1] == '-') sum = '0' - ch;
			else if(sum < 0) sum = sum * 10 - ch + '0';
			else sum = sum * 10 + ch - '0';
			if(str[i+1] == ' ' or i+1 == str.length()){
				NumberStack.push(sum);
				sum = 0;
			}
		}
		else if(!isdigit(str[i+1]) and ch != ' '){
			if(NumberStack.empty()) continue;
			second = NumberStack.top();
			NumberStack.pop();
			if(NumberStack.empty()) continue;
			first = NumberStack.top();
			NumberStack.pop();
			if(ch == '-') NumberStack.push(first - second);
			else if(ch == '+') NumberStack.push(first + second);
			else if(ch == '*') NumberStack.push(first * second); 
			else NumberStack.push(first / second);
		}
	}
	cout<<NumberStack.top();
	return 0;
} 
