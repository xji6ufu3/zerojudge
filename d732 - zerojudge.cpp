#include <iostream>
using namespace std;

int n, k, A[100001], src;

int bin_src ( int lt, int rt, int key ) {
	if ( lt > rt )
	return 0;
	int m = ( lt + rt ) / 2;
	if ( key == A[m] )
	return m;
	if ( key < A[m] )
	return bin_src ( lt, m - 1, key );
	if ( key > A[m] )
	return bin_src ( m + 1, rt, key );
}

int main() {
	while ( cin >> n >> k ) {
	for ( int i = 1; i <= n; ++i )
	cin >> A[i];
	for ( int i = 1; i <= k; ++i ) {
	cin >> src;
	cout << bin_src ( 1, n, src ) << endl;
}
}
return 0;
}
