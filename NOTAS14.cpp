#include <iostream>

using namespace std;

int main(){
    int n, qtd[100] = {}, maiorValor = 0, maiorId = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> x;
        qtd[x-1]++;
    }
    for(int i = 0; i < 100; i++)
    {
        if(qtd[i] > maiorValor){
            maiorValor = qtd[i];
            maiorId = i;
        }
        if(qtd[i] == maiorValor){
            if(i > maiorId) maiorId = i;
        }
    }
    cout << maiorId +1 << endl;
}