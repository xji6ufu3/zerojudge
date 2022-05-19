#include<iostream>
#include<stack>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	string a,s;
	char c[7]={'I','V','X','L','C','D','M'};
	int cc[7]={1,5,10,50,100,500,1000};
	stack<char> S;
	while(cin>>a and a!="#")
	{
		cin>>s;
		int aa=0,ss=0,aaa[a.size()],sss[s.size()],fin=0;
		for(int q=0;q<a.size();q++)
		{
			for(int w=0;w<7;w++)
			{
				if(c[w]==a[q])
				{
					aa+=cc[w];
					aaa[q]=cc[w];
					break;
				}
			} 
		}
		for(int q=0;q<s.size();q++)
		{
			for(int w=0;w<7;w++)
			{
				if(c[w]==s[q])
				{
					ss+=cc[w];
					sss[q]=cc[w];
					break;
				}
			} 
		}
		int t=aaa[a.size()-1],tt=sss[s.size()-1],k,kk=0;
		for(int q=a.size()-1;q>=0;q--)
		{
			if(aaa[q]<t)
			{
				aa-=aaa[q]*2;
			}
			else
			{
				t=aaa[q];
			}
		}
		for(int q=s.size()-1;q>=0;q--)
		{
			if(sss[q]<tt)
			{
				ss-=sss[q]*2;
			}
			else
			{
				tt=sss[q];
			}
		}
		fin=aa-ss;
		if(fin<0)
		fin*=-1;
		while(fin)
		{
			k=fin%10;
			fin/=10;
			kk++;
			if(kk==1)
			{
				if(k<=5)
				{
					if(k<=3)
					{
						for(int q=0;q<k;q++)
						  S.push('I');
					}
					else if(k==4)
					{
						S.push('V');
						S.push('I');
					}
					else
					S.push('V');
				}
				else
				{
					if(k<=8)
					{
						for(int q=0;q<k-5;q++)
					     S.push('I');
					    S.push('V');
					}
					else if(k==9)
					{
						S.push('X');
						S.push('I');
					}
					else
					S.push('X');
				}
			}
			else if(kk==2)
			{
				if(k<=5)
				{
					if(k<=3)
					 for(int q=0;q<k;q++)
					  S.push('X');
					else if(k==4)
					{
						S.push('L');
						S.push('X');
					}
					else
					S.push('L');
				}
				else
				{
					if(k<=8)
					{
						for(int q=0;q<k-5;q++)
					     S.push('X');
					    S.push('L');
					}
					else if(k==9)
					{
						S.push('C');
						S.push('X');
					}
					else
					S.push('C');
				}
			}
			else if(kk==3)
			{
				if(k<=5)
				{
					if(k<=3)
					 for(int q=0;q<k;q++)
					  S.push('C');
					else if(k==4)
					{
						S.push('D');
						S.push('C');
					}
					else
					S.push('D');
				}
				else
				{
					if(k<=8)
					{
						for(int q=0;q<k-5;q++)
					     S.push('C');
					    S.push('D');
					}
					else if(k==9)
					{
						S.push('M');
						S.push('C');
					}
					else
					S.push('M');
				}
			}
			else
			{
				for(int q=0;q<k;q++)
				S.push('M');
			}
		}
		if(S.size()==0)
		{
			cout<<"ZERO\n";
			continue;
		}
		while(S.size())
		{
			cout<<S.top();
			S.pop();
		}
		cout<<'\n';
	}
}
/*
MCMXCVIII
中間參雜加法與減法
原本想從左至右一遇到左邊小於右邊時就把它變負數
但如果像是IIV這樣，就比較難判斷了
可能還要多設一個迴圈
經思考後，或許可以先從正面加起來，再從後面讀回來扣掉2*k，也就是由右至左
用一變數存數，往左一一對比，如果比較小就將總和扣除兩倍
如V比I大，IV總和為11，便扣除1*2，11-2=9
*/
