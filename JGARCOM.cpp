#include <iostream>

using namespace std;

int main(){
    int n, l, c, s;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> l >> c;
        if(l>c){
            cout << s <<endl;
            cout << c <<endl;
            s += c;
        }
    }
    cout << s << endl;
    return 0;
}