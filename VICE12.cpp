#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b && a < c || a < b && a > c){
        cout << a << endl;
    } else if(b > a && b < c || b < a && b > c){
        cout << b << endl;
    } else {
        cout << c << endl;
    }
    return 0;
}
