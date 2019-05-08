#include <iostream>

using namespace std;

int main(){
    int n, m, p, d;
    cin >> n >> m;
    int sapos[n] = {};
    for(int i = 0; i < m; i++)
    {
        cin >> p >> d;
        sapos[p-1] = 1;
        for(int j = p; j <= n; j+=d)
        {
            sapos[j-1] = 1;
        }
        for(int j = p; j >= 0; j-=d)
        {
            sapos[j-1] = 1;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << sapos[i] << endl;
    }
    
    
}