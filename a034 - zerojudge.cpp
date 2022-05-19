#include <iostream>
using namespace std;
int main()
{
  long long int a;
  while (cin >> a) {
    long long int b[16]={0}, c=0;
    while (1) {
      b[c]=a%2; a/=2;
      if (a==0) {
        break;
      }
      c++;
    }
    for (;c>=0;c--) {
      cout << b[c];
    }
    cout << endl;
  }
}
