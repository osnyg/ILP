#include <iostream>

using namespace std;

int main(){
    int n, c, s, e, p;
    char ex;
    cin >> n >> c;
    ex = 'N';
    for(int i = 0; i < n; i++)
    {
        cin >> s >> e;
        p += e - s;
        if(p > c){
            ex = 'S';
        }
    }
    cout << ex << endl;
    return 0;
}