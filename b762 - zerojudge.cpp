#include <iostream>
#include <string>
using namespace std;
int main() 
{
	int n, kill, assist, die, combo;
	string order;
	while ( cin >> n )
	{
		kill = assist = die = combo = 0;
		for ( int q = 0; q < n; q++ ) 
		{
			cin >> order;
			if ( order == "Get_Kill" ) 
			{
				combo++;
				kill++;
				if ( combo == 3 ) cout << "KILLING SPREE!" << '\n';
				else if ( combo == 4 ) cout << "RAMPAGE~" << '\n';
				else if ( combo == 5 ) cout << "UNSTOPPABLE!" << '\n';
				else if ( combo == 6 ) cout << "DOMINATING!" << '\n';
				else if ( combo == 7 ) cout << "GUALIKE!" << '\n';
				else if ( combo >= 8 ) cout << "LEGENDARY!" << '\n';
				else cout << "You have slain an enemie." << '\n';
			}
			else if ( order == "Get_Assist" ) assist++;
			else if ( order == "Die" )
			{
				cout << ( ( combo < 3 ) ? "You have been slained." : "SHUTDOWN." ) << '\n';
				combo = 0;
				die++;
			}
		}
		cout << kill << '/' << die << '/' << assist << '\n';
	}
}
