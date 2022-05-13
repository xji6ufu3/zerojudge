#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
	if(ch=='(') return -1;
	else if(ch=='+' or ch=='-') return 0;
	return 1;
}
string InfixToPostfix(string str){
	string s="";
	stack<char> Stack;
	char ch;
	for(int q=0;q<str.length();q++){
		ch=str[q];
		if(isdigit(ch)){
			s+=ch;
			if(str[q+1]==' ' or q+1==str.length()) s+=' ';
		}
		else if(ch=='(') Stack.push(ch);
		else if(ch==')'){
			while(Stack.top()!='('){
				s=s+Stack.top()+' ';
				Stack.pop();
			}
			Stack.pop();
		}
		else if(ch==' ') continue;
		else{
			while(!Stack.empty() and priority(ch)<=priority(Stack.top())){
				s=s+Stack.top()+' ';
				Stack.pop();
			}
			Stack.push(ch);
		}
	}
	while(!Stack.empty()){
		s=s+Stack.top()+' ';
		Stack.pop();
	}
	s.erase(s.length()-1);
	return s;
}
int Count(string str){
	stack<int> Stack;
	char ch;
	int sum=0,first,second,ans;
	for(int q=0;q<str.length();q++){
		ch=str[q];
		if(isdigit(ch)){
			sum=sum*10+ch-'0';
			if(str[q+1]==' ' or q+1==str.length()){
				Stack.push(sum);
				sum=0;
			}
		}
		else if(ch==' ') continue;
		else{
			second=Stack.top();
			Stack.pop();
			first=Stack.top();
			Stack.pop();
			if(ch=='+') Stack.push(first+second);
			else if(ch=='-') Stack.push(first-second);
			else if(ch=='*') Stack.push(first*second);
			else if(ch=='/') Stack.push(first/second);
			else Stack.push(first%second);
		}
	}
	ans=Stack.top();
	Stack.pop();
	return ans;
}
int main(){
	string str;
	char ch;
	int sum,first,second;
	bool check;
	while(getline(cin,str)){
		str=InfixToPostfix(str);
		cout<<Count(str)<<'\n';
	}
	return 0;
}
/*
test:
input: ( 8 % 2 * ( 3 + 2 + 1 ) / ( 2 * 2 ) ) - 6 - 3 + 4 - ( 1 - ( 50 * 2 ) ) + 6
output: 100
