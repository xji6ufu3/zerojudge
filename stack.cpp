#include<iostream>
using namespace std;
#define max_size 100

void push(int);
void pop();
int stack_top();
int stack_size();

int stack[max_size], top = 0;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	push(0);
	pop();
	pop();
	push(1);
	push(2);
	pop();
	
	cout<<"size: "<<stack_size()<<'\n';
	cout<<"top: "<<stack_top()<<'\n';
	return 0;
}

void push(int data){
	if(top == max_size) cout<<"This stack is full\n";
	else stack[top++] = data; // �s�Jstack[top]��Atop++
	// ex: top==0�ɡAstack[0]=data�Atop++ -> top==1, �Gtop==stack���s�J����ƼơA��stack[top]�å��s���� 
}

void pop(){
	if(top == 0) cout<<"This stack is empty\n";
	else cout<<stack[--top]<<'\n'; // ��top--,�ÿ�Xstack[top](�̫�@�����)�A�Y�U��push�A�N�|�л\��estack[top]����� 
}

int stack_top(){
	return stack[top];
}

int stack_size(){
	return top;
}
