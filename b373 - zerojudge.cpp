#include <iostream>
using namespace std;
int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while ( cin >> n ) 
	{
		int t[n], cnt = 0;
		for ( int i = 0; i < n; ++i ) cin >> t[i];
		for ( int q = 0; q < n - 1; ++q )
		for ( int w = 0; w < n - q - 1; ++w )
		if ( t[w] > t[w + 1] ) 
		{
			t[w] ^= t[w + 1] ^= t[w] ^= t[w + 1];
			++cnt;
		}
		cout << cnt << '\n';
	}
}
