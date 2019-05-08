#include <iostream>

using namespace std;

int main(){
    int n, s, mov, menor;
    cin >> n >> s;
    menor = s;
    for(int i = 0; i < n; i++)
    {
        cin >> mov;
        if((s+mov) < menor) menor = s+mov;
        s+=mov;
    }
    cout << menor << endl;
    return 0;
}