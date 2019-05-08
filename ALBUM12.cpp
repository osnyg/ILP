#include <iostream>

using namespace std;

int main(){
    int x, y, l1, h1, l2, h2;
    char s;
    cin >> x >> y >> l1 >> h1 >> l2 >> h2;
    if     (l1 <= x && l2 <= x && h1 + h2 <= y) cout << 'S' << endl;
    else if(l1 <= x && h2 <= x && h1 + l2 <= y) cout << 'S' << endl;
    else if(h1 <= x && l2 <= x && l1 + h2 <= y) cout << 'S' << endl;
    else if(h1 <= x && h2 <= x && l1 + l2 <= y) cout << 'S' << endl;
    else if(h1 <= y && h2 <= y && l1 + l2 <= x) cout << 'S' << endl;
    else if(h1 <= y && l2 <= y && h2 + l1 <= x) cout << 'S' << endl;
    else if(l1 <= y && h2 <= y && h1 + l2 <= x) cout << 'S' << endl;
    else if(l1 <= y && l2 <= y && h1 + h2 <= x) cout << 'S' << endl;
    else cout << 'N' << endl;
    return 0;
}