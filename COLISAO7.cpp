#include <iostream>

using namespace std;

int main(){
    int x00, y00, x10, y10, x01, y01, x11, y11;
    cin >> x00 >> y00 >> x01 >> y01;
    cin >> x10 >> y10 >> x11 >> y11;
    if(x01 < x10 || x11 < x00 || y01 < y10 || y11 < y00 || x00 > x11 || x10 > x01 || y00 > y11 || y10 > y01){
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }
    return 0;
}