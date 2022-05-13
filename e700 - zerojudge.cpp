#include<iostream>
using namespace std;
int main()
{
	int a,s;
	char c;
	while(cin>>a>>c>>s)
	{
		if((a==1 && s>=21 && s<=31) || (a==2 and s>=1 and s<=19))
		cout<<"¤ô²~®y\n";
		else if ((a==2 && s>=20 && s<=30) || (a==3 and s>=1 and s<=20))
		cout<<"Âù³½®y\n";
		else if ((a==3 && s>=21 && s<=31) || (a==4 and s>=1 and s<=20))
		cout<<"¨d¦Ï®y\n";
		else if ((a==4 && s>=21 && s<=30) || (a==5 and s>=1 and s<=21))
		cout<<"ª÷¤û®y\n";
		else if ((a==5 && s>=22 && s<=31) || (a==6 and s>=1 and s<=21))
		cout<<"Âù¤l®y\n";
		else if ((a==6 && s>=22 && s<=30) || (a==7 and s>=1 and s<=22))
		cout<<"¥¨ÃÉ®y\n";
		else if ((a==7 && s>=23 && s<=31) || (a==8 and s>=1 and s<=21)) 
		cout<<"·à¤l®y\n";
		else if ((a==8 && s>=22 && s<=31) || (a==9 and s>=1 and s<=23)) 
		cout<<"³B¤k®y\n";
		else if ((a==9 && s>=24 && s<=30) || (a==10 and s>=1 and s<=23))
		cout<<"¤Ñ¯¯®y\n";
		else if ((a==10 && s>=24 && s<=31) || (a==11 and s>=1 and s<=22)) 
		cout<<"¤ÑÃÈ®y\n";
		else if ((a==11 && s>=23 && s<=30) || (a==12 and s>=1 and s<=22)) 
		cout<<"®g¤â®y\n";
		else
		cout<<"¼¯½~®y\n";
	}
}
