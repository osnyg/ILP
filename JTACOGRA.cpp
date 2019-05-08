#include <iostream>

using namespace std;

int main(){
    int n, t, v, s;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> t >> v;
        s+=t*v;
    }
    cout << s << endl;
    return 0;
}