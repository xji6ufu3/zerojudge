#include<iostream>
using namespace std;
int main()
{
	//cout<<"�п�J�����Ҧr��:\n";//input������^��r��,search���r���N�������W��,search2������r�������ƦrY,bb�ƦC���������Ҳ�2�X���10�X�A�̫�@�X�����ҽX
	string input;//0~9��ASCII�Ȭ�48~57 
	string search[26]={"�x�_��","�x����","�򶩥�","�x�n��","������","�x�_��","�y����","��鿤","�Ÿq��","�s�˿�","�]�߿�","�x����","�n�뿤","���ƿ�","�s�˥�","���L��","�Ÿq��","�x�n��","������","�̪F��","�Ὤ��","�x�F��","������","���","�����s","�s����"};
	string gender;
	int search2[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	cin>>input;
	if(input.at(0)<65 or input.at(0)>90)
	{
		if(input.at(0)>=97 and input.at(0)<=122)
		input.at(0)-=32;
		/*else
		{
			cout<<"�Ĥ@���J�榡���~";
			return 0; 
		}*/ 
	}
	/*if(input.size()>10)
	{
		cout<<"��J���~";
		return 0;
	}*/ 
	int a=0,k,kk;
	for(int q=1;q<9;q++)
	a=a+(input.at(q)-48) *(9-q);
	//cout<<a;
	k=search2[input.at(0)-65];
	if(input.at(1)==1)
	gender="�k��";
	else if(input.at(1)==2) 
	gender="�k��";
	/*else
	{
		cout<<"��J�榡���~"<<endl;
		return 0;
	}*/
	if(input.at(9)-48-10+((k%10)*9+k/10+a)%10)
	cout<<"fake";
	else
	cout<<"real";
//	cout<<"�z�~���:"<<search[input.at(0)-65]<<'\n'<<"�z���ʧO��"<<gender<<'\n'<<"���������ҽX���T";
	return 0;
 }
