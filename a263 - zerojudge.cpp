#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int y1, m1, d1, y2, m2, d2;
    int m[12] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
    int n[12] = { 0,31,60,91,121,152,182,213,244,274,305,335 };
    while (cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2)
    {
        int a[2] = {};
        a[0] = (y1 - 1) * 365 + (y1 - 1) / 4 - (y1 - 1) / 100 + (y1 - 1) / 400;
        a[1] = (y2 - 1) * 365 + (y2 - 1) / 4 - (y2 - 1) / 100 + (y2 - 1) / 400;
 
        if (y1 % 4 == 0 and y1 % 100 != 0 or y1 % 400 == 0) a[0] += n[m1 - 1];
        else a[0] += m[m1 - 1];
 
        if (y2 % 4 == 0 and y2 % 100 != 0 or y2 % 400 == 0) a[1] += n[m2 - 1];
        else a[1] += m[m2 - 1];
 
        a[0] += d1;
        a[1] += d2;
        cout << fixed << setprecision(0) << fabs(a[0] - a[1]) << '\n' ;
    }
}
