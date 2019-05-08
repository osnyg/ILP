#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int vetorE[n] = {}, vetorS[n] = {};
    for(int i = 0; i < n; i++)
    {
        cin >> vetorE[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(vetorE[i]) vetorS[i]++;
        if(i!=n-1 && vetorE[i+1]) vetorS[i]++;
        if(i!=0 && vetorE[i-1]) vetorS[i]++;
    }
    for(int i = 0; i < n; i++)
    {
        cout << vetorS[i] << endl;
    }
    
}
