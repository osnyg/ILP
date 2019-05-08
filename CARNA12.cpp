#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float n[5], menor, maior, soma=0;
    cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];
    maior = menor = n[0];
    for(int i=0; i < 5; i++){
        if(n[i] < menor){
            menor = n[i];
        }
        if(n[i] > maior){
            maior = n[i];
        }
        soma += n[i];
    }
    cout << fixed << setprecision(1) << soma - maior - menor << endl;
    return 0;
}