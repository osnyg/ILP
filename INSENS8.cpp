#include <iostream>

using namespace std;

int main(){
    int n, x1, x2, y1, y2, d;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        d += (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    }
    cout << d << endl;
    return 0;
}