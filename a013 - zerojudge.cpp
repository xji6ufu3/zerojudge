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
���������[�k�P��k
�쥻�Q�q���ܥk�@�J�쥪��p��k��ɴN�⥦�ܭt��
���p�G���OIIV�o�ˡA�N������P�_�F
�i���٭n�h�]�@�Ӱj��
�g��ҫ�A�γ\�i�H���q�����[�_�ӡA�A�q�᭱Ū�^�Ӧ���2*k�A�]�N�O�ѥk�ܥ�
�Τ@�ܼƦs�ơA�����@�@���A�p�G����p�N�N�`�M�����⭿
�pV��I�j�AIV�`�M��11�A�K����1*2�A11-2=9
*/
