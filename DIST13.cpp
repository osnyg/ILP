#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int xm, ym, xr, yr;
    cin >> xm >> ym >> xr >> yr;
    cout << abs(xm - xr) + abs(ym-yr) << endl;
    return 0;
}
