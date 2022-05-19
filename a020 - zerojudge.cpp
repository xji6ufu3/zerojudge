#include<iostream>
using namespace std;
int main()
{
	//cout<<"請輸入身分證字號:\n";//input為首位英文字母,search為字母代表的縣市名稱,search2為首位字母對應數字Y,bb數列紀錄身分證第2碼到第10碼，最後一碼為驗證碼
	string input;//0~9的ASCII值為48~57 
	string search[26]={"台北市","台中市","基隆市","台南市","高雄市","台北縣","宜蘭縣","桃園縣","嘉義市","新竹縣","苗栗縣","台中縣","南投縣","彰化縣","新竹市","雲林縣","嘉義市","台南縣","高雄縣","屏東縣","花蓮縣","台東縣","金門縣","澎湖縣","陽明山","連江縣"};
	string gender;
	int search2[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	cin>>input;
	if(input.at(0)<65 or input.at(0)>90)
	{
		if(input.at(0)>=97 and input.at(0)<=122)
		input.at(0)-=32;
		/*else
		{
			cout<<"第一位輸入格式錯誤";
			return 0; 
		}*/ 
	}
	/*if(input.size()>10)
	{
		cout<<"輸入錯誤";
		return 0;
	}*/ 
	int a=0,k,kk;
	for(int q=1;q<9;q++)
	a=a+(input.at(q)-48) *(9-q);
	//cout<<a;
	k=search2[input.at(0)-65];
	if(input.at(1)==1)
	gender="男性";
	else if(input.at(1)==2) 
	gender="女性";
	/*else
	{
		cout<<"輸入格式錯誤"<<endl;
		return 0;
	}*/
	if(input.at(9)-48-10+((k%10)*9+k/10+a)%10)
	cout<<"fake";
	else
	cout<<"real";
//	cout<<"您居住於:"<<search[input.at(0)-65]<<'\n'<<"您的性別為"<<gender<<'\n'<<"身分證驗證碼正確";
	return 0;
 }
